/* The caller retains this process-lifetime custom loader before creating DXVK. */
#pragma once
#include <vulkan/vulkan.h>
#include <dlfcn.h>
#include <cstdio>
#include <cstring>
#include <string>

inline PFN_vkGetInstanceProcAddr ut3_open_turnip(const char *directory,char *error,size_t error_size) {
  if(!directory||!*directory){snprintf(error,error_size,"Turnip native library directory is empty");return nullptr;}
  std::string path=std::string(directory)+"/";
  void *helper=dlopen((path+"libadrenotools.so").c_str(),RTLD_NOW|RTLD_LOCAL);
  using Open=void*(*)(int,int,const char*,const char*,const char*,const char*,const char*,void**);
  auto open=helper?reinterpret_cast<Open>(dlsym(helper,"adrenotools_open_libvulkan")):nullptr;
  void *loader=open?open(RTLD_NOW|RTLD_LOCAL,1,nullptr,path.c_str(),path.c_str(),"libut3_turnip.so",nullptr,nullptr):nullptr;
  auto get=loader?reinterpret_cast<PFN_vkGetInstanceProcAddr>(dlsym(loader,"vkGetInstanceProcAddr")):nullptr;
  if(!get){const char *detail=dlerror();snprintf(error,error_size,"Turnip loader failed: %s",detail?detail:"no custom driver returned");return nullptr;}
  auto create=reinterpret_cast<PFN_vkCreateInstance>(get(nullptr,"vkCreateInstance"));
  VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};app.pApplicationName="UT3 driver validation";app.apiVersion=VK_API_VERSION_1_3;
  VkInstanceCreateInfo ci{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};ci.pApplicationInfo=&app;
  VkInstance instance{};VkResult hr=create?create(&ci,nullptr,&instance):VK_ERROR_INITIALIZATION_FAILED;
  if(hr!=VK_SUCCESS){snprintf(error,error_size,"Turnip Vulkan1.3 instance failed: %d",hr);return nullptr;}
  auto enumerate=reinterpret_cast<PFN_vkEnumeratePhysicalDevices>(get(instance,"vkEnumeratePhysicalDevices"));
  auto properties=reinterpret_cast<PFN_vkGetPhysicalDeviceProperties>(get(instance,"vkGetPhysicalDeviceProperties"));
  auto destroy=reinterpret_cast<PFN_vkDestroyInstance>(get(instance,"vkDestroyInstance"));
  bool supported=false;uint32_t count=8;VkPhysicalDevice devices[8];
  if(enumerate&&properties&&destroy&&enumerate(instance,&count,devices)==VK_SUCCESS)
    for(unsigned i=0;i<count&&i<8;++i){VkPhysicalDeviceProperties p{};properties(devices[i],&p);
      supported|=p.apiVersion>=VK_API_VERSION_1_3&&p.vendorID==0x5143&&strstr(p.deviceName,"Turnip");}
  if(destroy)destroy(instance,nullptr);
  if(!supported){snprintf(error,error_size,"Turnip did not expose a Qualcomm Vulkan1.3 device");return nullptr;}
  return get;
}
