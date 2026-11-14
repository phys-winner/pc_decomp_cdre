"""Execute the actual overlay against deterministic Android input/geometry fixtures."""
from pathlib import Path
import os
import re
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/driving-controls"
HARNESS = r'''
import java.util.*;
public class DrivingControlsProbe {
 static class Metrics {float density=1;}
 static class Resources {Metrics m=new Metrics();Metrics getDisplayMetrics(){return m;}}
 static class Context {
  static final int MODE_PRIVATE=0;static final String SENSOR_SERVICE="sensor";
  SharedPreferences prefs=new SharedPreferences();Resources resources=new Resources();
  SharedPreferences getSharedPreferences(String n,int mode){return prefs;}
  Object getSystemService(String name){return null;}
 }
 static class SharedPreferences {
  Map<String,Object> values=new HashMap<>();
  boolean contains(String k){return values.containsKey(k);}
  float getFloat(String k,float d){return values.containsKey(k)?(Float)values.get(k):d;}
  boolean getBoolean(String k,boolean d){return values.containsKey(k)?(Boolean)values.get(k):d;}
  Editor edit(){return new Editor();}
  class Editor {
   Editor putFloat(String k,float v){values.put(k,v);return this;}
   Editor putBoolean(String k,boolean v){values.put(k,v);return this;}
   Editor remove(String k){values.remove(k);return this;}void apply(){}
  }
 }
 static class View {
  static final int VISIBLE=0,GONE=8;int W,H,visibility;Context context;float alpha=1;String description;long animationDuration;
  class Animator {Animator alpha(float a){alpha=a;return this;}Animator setDuration(long ms){animationDuration=ms;return this;}void start(){}void cancel(){}}
  Animator animate(){return new Animator();}void setAlpha(float a){alpha=a;}void setContentDescription(CharSequence s){description=s.toString();}
  View(Context c){context=c;}Context getContext(){return context;}
  Resources getResources(){return context.resources;}
  int getWidth(){return W;}int getHeight(){return H;}int getVisibility(){return visibility;}void setVisibility(int v){visibility=v;}
  Display getDisplay(){return null;}void setEnabled(boolean v){}boolean isEnabled(){return true;}
  void setWillNotDraw(boolean b){}void setFocusable(boolean b){}void invalidate(){}
  long clock;Map<Runnable,Long> callbacks=new HashMap<>();
  void postDelayed(Runnable r,long ms){callbacks.put(r,clock+ms);}void removeCallbacks(Runnable r){callbacks.remove(r);}
  void advance(long ms){clock+=ms;for(Runnable r:new ArrayList<>(callbacks.keySet()))if(callbacks.get(r)<=clock){callbacks.remove(r);r.run();}}
  protected void onDraw(Canvas c){}protected void onDetachedFromWindow(){}
  protected void onSizeChanged(int w,int h,int oldw,int oldh){}
  protected void onVisibilityChanged(View v,int visibility){}
 }
 static class Color {
  static final int WHITE=-1;static int argb(int a,int r,int g,int b){return a<<24|r<<16|g<<8|b;}
  static int rgb(int r,int g,int b){return argb(255,r,g,b);}static int alpha(int c){return c>>>24;}
 }
 static class Typeface {static final Typeface DEFAULT_BOLD=new Typeface();}
 static class DashPathEffect {DashPathEffect(float[] intervals,float phase){}}
 static class Paint {
  static final int ANTI_ALIAS_FLAG=1;enum Style{FILL,STROKE}enum Align{CENTER}
  static class FontMetrics{float ascent=-8,descent=2;}float size;int color,alpha;DashPathEffect effect;
  void setPathEffect(DashPathEffect e){effect=e;}
  Paint(int f){}void setStyle(Style s){}void setStrokeWidth(float s){}void setColor(int c){color=c;}
  void setTextAlign(Align a){}void setTypeface(Typeface t){}void setTextSize(float s){size=s;}
  float measureText(String s){return s.length()*size*.5f;}void setAlpha(int a){alpha=a;}
  void getFontMetrics(FontMetrics m){}
 }
 static class RectF {
  float left,top,right,bottom;void set(float l,float t,float r,float b){left=l;top=t;right=r;bottom=b;}
  void set(RectF b){set(b.left,b.top,b.right,b.bottom);}float width(){return right-left;}float height(){return bottom-top;}
  float centerX(){return (left+right)/2;}float centerY(){return (top+bottom)/2;}
  boolean contains(float x,float y){return x>=left&&x<right&&y>=top&&y<bottom;}
  void inset(float x,float y){left+=x;right-=x;top+=y;bottom-=y;}
  boolean intersect(float l,float t,float r,float b){set(Math.max(left,l),Math.max(top,t),Math.min(right,r),Math.min(bottom,b));return width()>0&&height()>0;}
 }
 static class Path {void reset(){}void moveTo(float x,float y){}void lineTo(float x,float y){}void close(){}void quadTo(float a,float b,float c,float d){}}
 static class Canvas {
  RectF hint;String hintText,autoText;float hintTextX,hintTextSize;int autoColor,autoAlpha;
  float firstScaleX,firstScaleY;int draws;int save(){return 1;}void restoreToCount(int n){}void translate(float x,float y){}
  void scale(float x,float y){if(firstScaleX==0){firstScaleX=x;firstScaleY=y;}}
  void rotate(float degrees,float x,float y){}
  void drawColor(int c){++draws;}void drawRect(RectF r,Paint p){++draws;}void drawRect(float a,float b,float c,float d,Paint p){++draws;}
  void drawRoundRect(RectF r,float x,float y,Paint p){++draws;if(p.effect!=null){hint=new RectF();hint.set(r);}}void drawRoundRect(float a,float b,float c,float d,float x,float y,Paint p){++draws;}
  void drawText(String s,float x,float y,Paint p){++draws;if(s.equals("PAUSE")||s.equals("ПАУЗА")){hintText=s;hintTextX=x;hintTextSize=p.size;}if(s.equals("AUTO")||s.equals("АВТО")){autoText=s;autoColor=p.color;autoAlpha=p.alpha;}}void drawCircle(float x,float y,float r,Paint p){++draws;}
  void drawPath(Path p,Paint q){++draws;}void drawLine(float a,float b,float c,float d,Paint p){++draws;}
  void drawArc(float a,float b,float c,float d,float e,float f,boolean g,Paint p){++draws;}
 }
 static class Matrix {float sx=1,sy=1;void setScale(float x,float y){sx=x;sy=y;}}
 static class Sensor {static final int TYPE_GRAVITY=1,TYPE_ACCELEROMETER=2;}
 static class SensorEvent {float[] values;}
 interface SensorEventListener {void onSensorChanged(SensorEvent e);void onAccuracyChanged(Sensor s,int a);}
 static class SensorManager {static final int SENSOR_DELAY_GAME=1;static final float GRAVITY_EARTH=9.80665f;Sensor getDefaultSensor(int t){return null;}
  void registerListener(SensorEventListener l,Sensor s,int d){}void unregisterListener(SensorEventListener l){}
 }
 static class Surface {static final int ROTATION_0=0,ROTATION_90=1,ROTATION_180=2,ROTATION_270=3;}
 static class Display {int getRotation(){return Surface.ROTATION_90;}}
 static class SparseArray<T> {
  TreeMap<Integer,T> m=new TreeMap<>();void clear(){m.clear();}void put(int k,T v){m.put(k,v);}T get(int k){return m.get(k);}
  void remove(int k){m.remove(k);}int size(){return m.size();}int keyAt(int i){return new ArrayList<>(m.keySet()).get(i);}
  T valueAt(int i){return m.get(keyAt(i));}void removeAt(int i){m.remove(keyAt(i));}
 }
 static class MotionEvent {
  static final int ACTION_DOWN=0,ACTION_UP=1,ACTION_MOVE=2,ACTION_CANCEL=3,ACTION_POINTER_DOWN=5,ACTION_POINTER_UP=6;
  int action,index;int[] ids;float[] xs,ys;
  MotionEvent(int a,int i,int[] p,float... xy){action=a;index=i;ids=p;xs=new float[p.length];ys=xs.clone();for(int j=0;j<p.length;j++){xs[j]=xy[j*2];ys[j]=xy[j*2+1];}}
  static MotionEvent obtain(MotionEvent e){MotionEvent n=new MotionEvent(e.action,e.index,e.ids,new float[e.ids.length*2]);n.xs=e.xs.clone();n.ys=e.ys.clone();return n;}
  int getActionMasked(){return action;}int getActionIndex(){return index;}int getPointerId(int i){return ids[i];}int getPointerCount(){return ids.length;}
  float getX(int i){return xs[i];}float getY(int i){return ys[i];}int findPointerIndex(int id){for(int i=0;i<ids.length;i++)if(ids[i]==id)return i;return -1;}
  void offsetLocation(float x,float y){for(int i=0;i<xs.length;i++){xs[i]+=x;ys[i]+=y;}}
  void transform(Matrix m){for(int i=0;i<xs.length;i++){xs[i]*=m.sx;ys[i]*=m.sy;}}void recycle(){}
 }
 static class GameActivity extends Context {
  int turnSensitivity=10;
  DrivingControls controls;void changeSteeringMode(int delta){controls.setSteeringMode(Math.floorMod(controls.steeringMode+delta,DrivingControls.STEERING_COUNT));}
  String steeringName(){return "Two buttons";}
  boolean russian;int pauseCount,hudTap;static int hudHit,weaponMask;static float[] weaponAnchors;
  static int nativeHudHit(float x,float y){return hudHit;}
  static void nativeWeaponHud(int m,float[] a){weaponMask=m;weaponAnchors=a;}
  void onHudTap(int region){hudTap=region;}
  static int buttons,controllerResets;static float lx,rt,lt;static Set<Integer> keys=new HashSet<>();
  static void nativeSteeringDigital(boolean value){}
  static void nativeController(int b,float x,float y,float rx,float ry,float l,float r){buttons=b;lx=x;lt=l;rt=r;}
  static void nativeHorizon(float v){}static void nativeDriving(boolean b){if(!b)++controllerResets;}static void nativeGamepad(int m,boolean b){}static void nativeKey(int k,boolean b){if(b)keys.add(k);else keys.remove(k);}
  void onDrivingPause(){++pauseCount;}void openTouchEditor(){}void closeTouchEditor(boolean save){}String tr(String e,String r){return russian?r:e;}
 }
 /* PRODUCTION */
 static class GamepadInput { /* STEERING */ }
 static void check(boolean b,String why){if(!b)throw new AssertionError(why);}
 static class SystemClock {static long now=100;static long uptimeMillis(){return now;}}
 static class ViewConfiguration {static int getDoubleTapTimeout(){return 300;}}
 static DrivingControls create(GameActivity a,int w,int h){DrivingControls c=new DrivingControls(a,"");a.controls=c;c.W=w;c.H=h;c.onSizeChanged(w,h,0,0);c.setInGame(true);c.setEnabled(true);return c;}
 static MotionEvent event(int action,int index,int[] ids,float... xy){return new MotionEvent(action,index,ids,xy);}
 public static void main(String[] args){
  for(float[] dims:new float[][]{{1280,720,2},{2424,1080,3},{2340,1080,2.75f},{2560,1600,2},{1920,1080,1.5f}}){
   GameActivity a=new GameActivity();a.resources.m.density=dims[2];DrivingControls c=create(a,(int)dims[0],(int)dims[1]);
   for(int steering=0;steering<DrivingControls.STEERING_COUNT;steering++){
    c.setSteeringMode(steering);
    for(DrivingControls.Control b:c.controls)if(!b.hidden()){
     RectF r=new RectF();b.bounds(r);check(r.left>=-1&&r.top>=-1&&r.right<=c.width+1&&r.bottom<=c.height+1,"default fits "+b.id);
     check(c.controlAt(r.centerX(),r.centerY())==b,"distinct race centre "+b.id);
    }
   }
   c.setSteeringMode(DrivingControls.STEERING_ARROWS);c.beginEdit();
   for(DrivingControls.Control b:c.controls)if(b.id.equals("lb")||b.id.equals("rb"))
    check(!c.floatingButton.contains(b.cx,b.cy)&&!c.hideSelected.contains(b.cx,b.cy),"editor leaves weapon centres selectable");
   c.endEdit(false);
  }
  GameActivity a=new GameActivity();a.resources.m.density=3;DrivingControls c=create(a,2424,1080);
  check(c.steeringMode==DrivingControls.STEERING_ARROWS,"arrows are the default steering mode");
  float ax=c.leftArrow.cx,ay=c.leftArrow.cy,bx=c.rightArrow.cx,by=c.rightArrow.cy;
  c.handleTransformedMotion(event(0,0,new int[]{73},ax,ay));check(GameActivity.lx==-1,"left arrow starts held");
  c.handleTransformedMotion(event(2,0,new int[]{73},bx,by));
  check(GameActivity.lx==1&&!c.leftArrow.inUse&&c.rightArrow.inUse&&c.pointers.get(73)==c.rightArrow,"one move transfers arrow ownership");
  c.handleTransformedMotion(event(2,0,new int[]{73},1200,400));check(GameActivity.lx==1,"outside both arrows preserves the last direction");
  c.handleTransformedMotion(event(2,0,new int[]{73},ax,ay));check(GameActivity.lx==-1,"reverse transfer");
  c.handleTransformedMotion(event(5,1,new int[]{73,81},ax,ay,c.rightTrigger.cx,c.rightTrigger.cy));
  c.handleTransformedMotion(event(2,0,new int[]{81,73},c.rightTrigger.cx,c.rightTrigger.cy,bx,by));
  check(GameActivity.lx==1&&GameActivity.rt==1,"arrow transfer preserves a reordered pedal pointer");
  c.handleTransformedMotion(event(6,1,new int[]{81,73},c.rightTrigger.cx,c.rightTrigger.cy,1200,400));
  check(GameActivity.lx==0&&GameActivity.rt==1,"off-button release clears only the arrow owner");c.release();
  c.handleTransformedMotion(event(0,0,new int[]{73},ax,ay));
  c.handleTransformedMotion(event(5,1,new int[]{73,81},ax,ay,bx,by));
  c.handleTransformedMotion(event(2,0,new int[]{73,81},bx,by,bx,by));
  check(c.pointers.get(73)==c.leftArrow&&c.pointers.get(81)==c.rightArrow&&GameActivity.lx==0,"an occupied arrow cannot steal another pointer");
  c.handleTransformedMotion(event(6,1,new int[]{73,81},bx,by,bx,by));
  c.handleTransformedMotion(event(2,0,new int[]{73},bx,by));check(GameActivity.lx==1,"transfer succeeds after other owner releases");c.release();
  DrivingControls.Control pause=null,cam=null,recover=null,look=null;
  for(DrivingControls.Control b:c.controls){if(b.id.equals("start"))pause=b;if(b.id.equals("x"))cam=b;if(b.id.equals("y"))recover=b;if(b.id.equals("look_back"))look=b;}
  check(pause.cx<2424*.1f&&pause.cy<1080*.15f,"pause is top left");
  check(look.cx<recover.cx&&recover.cx<cam.cx&&look.cx>2424*.7f,"utilities are reversed at top right");
  for(int mode=0;mode<DrivingControls.STEERING_COUNT;++mode){
   c.setSteeringMode(mode);
   for(DrivingControls.Control b:c.controls)if(b.id.equals("start"))pause=b;
   c.handleTransformedMotion(event(0,0,new int[]{9},c.rightTrigger.cx,c.rightTrigger.cy));
   c.setEnabled(false);check(GameActivity.buttons==0&&GameActivity.rt==0&&c.pointers.size()==0,"disable releases held input");
   Canvas hidden=new Canvas();c.onDraw(hidden);check(hidden.draws==0,"disabled overlay draws nothing, including pause");
   for(DrivingControls.Control b:c.controls)if(!b.id.equals("start"))check(!c.handleTransformedMotion(event(0,0,new int[]{9},b.cx,b.cy)),"disabled action rejects touch: "+b.id);
   check(!c.handleTransformedMotion(event(0,0,new int[]{9},2424*.3f,1080*.6f)),"disabled floating steering rejects touch");
   pause.userHidden=true;int pauses=a.pauseCount;
   check(c.handleTransformedMotion(event(0,0,new int[]{9},pause.cx,pause.cy)),"invisible pause zone receives touch");
   check(a.pauseCount==pauses+1&&GameActivity.buttons==0x10&&GameActivity.keys.contains(27),"invisible pause uses original START and Escape");
   check(GameActivity.lx==0&&GameActivity.rt==0&&GameActivity.lt==0,"disabled pause sends no driving input");
   c.handleTransformedMotion(event(2,0,new int[]{9},c.rightTrigger.cx,c.rightTrigger.cy));
   check(a.pauseCount==pauses+1&&GameActivity.rt==0,"dragging invisible pause cannot press a pedal");
   c.handleTransformedMotion(event(1,0,new int[]{9},pause.cx,pause.cy));check(GameActivity.buttons==0,"invisible pause releases");
   pause.userHidden=false;c.setInGame(false);
   check(!c.handleTransformedMotion(event(0,0,new int[]{9},pause.cx,pause.cy)),"invisible pause does not intercept menus");
   c.setInGame(true);c.setVisibility(View.GONE);
   check(!c.handleTransformedMotion(event(0,0,new int[]{9},pause.cx,pause.cy)),"hidden context does not intercept pause");
   c.setVisibility(View.VISIBLE);c.beginEdit();Canvas editor=new Canvas();c.onDraw(editor);check(editor.draws>0,"editor remains usable with controls disabled");c.endEdit(false);
   c.setEnabled(true);Canvas visible=new Canvas();c.onDraw(visible);check(visible.draws>0,"reenabling restores button drawing");
  }
   for(int[] insets:new int[][]{{0,0,0,0},{120,12,44,25},{44,12,120,25}}){
    GameActivity edgeActivity=new GameActivity();edgeActivity.resources.m.density=3;
    DrivingControls edge=create(edgeActivity,2424,1080);edge.setSafeInsets(insets[0],insets[1],insets[2],insets[3]);
    DrivingControls.Control edgePause=edge.controls.stream().filter(b->b.id.equals("start")).findFirst().get();
    RectF bounds=new RectF();edgePause.bounds(bounds);
    float scaleX=(2424-insets[0]-insets[2])/2424f,scaleY=(1080-insets[1]-insets[3])/1080f;
    float halfX=Math.max(edge.dp(24),bounds.width()*.5f+edge.dp(5)),halfY=Math.max(edge.dp(24),bounds.height()*.5f+edge.dp(5));
    float physicalY=bounds.centerY();
    float physicalLeft=Math.max(0,bounds.centerX()-halfX);
    float physicalRight=bounds.centerX()+halfX,physicalBottom=bounds.centerY()+halfY;
    for(boolean overlay:new boolean[]{true,false}){
     edge.setEnabled(overlay);
     Canvas racing=new Canvas();edge.onDraw(racing);check(racing.hint==null,"pause outline is hidden during racing");
     edge.setPauseHint(true);Canvas countdown=new Canvas();edge.onDraw(countdown);
     check(countdown.hint!=null&&"PAUSE".equals(countdown.hintText),"countdown shows dashed pause outline even with overlay disabled");
     check(Math.abs(countdown.hint.left-edge.dp(.5f)-physicalLeft)<.001f&&Math.abs(countdown.hint.right+edge.dp(.5f)-physicalRight)<.001f,"hint shares the physical pause hit bounds");
     check(Math.abs(countdown.hint.bottom+edge.dp(.5f)-Math.min(1080,physicalBottom))<.001f,"hint keeps pause height and clips at the screen");
     check(countdown.hintTextX-countdown.hintText.length()*countdown.hintTextSize*.25f>=insets[0],"pause caption stays clear of camera cutout");
     edgePause.userHidden=true;Canvas hiddenPause=new Canvas();edge.onDraw(hiddenPause);check((hiddenPause.hint==null)==overlay,"guide follows pause hit availability in custom layouts");edgePause.userHidden=false;
     edgeActivity.russian=true;Canvas russian=new Canvas();edge.onDraw(russian);check("ПАУЗА".equals(russian.hintText),"pause hint uses game language");edgeActivity.russian=false;
     edge.setPauseHint(false);Canvas started=new Canvas();edge.onDraw(started);check(started.hint==null,"start removes pause outline");
     for(float physicalX:new float[]{physicalLeft+1,bounds.centerX()}){
      int pauses=edgeActivity.pauseCount;
      check(edge.handleMotion(event(0,0,new int[]{37},physicalX,physicalY)),"pause uses unscaled full-display coordinates");
      check(edgeActivity.pauseCount==pauses+1&&GameActivity.buttons==0x10,"extended edge invokes the original pause action once");
      edge.handleMotion(event(1,0,new int[]{37},physicalX,physicalY));
      check(GameActivity.buttons==0&&edge.pointers.size()==0,"extended pause releases its pointer");
     }
     check(!edge.handleMotion(event(0,0,new int[]{37},physicalRight+1,physicalY)),"pause right boundary stays unchanged");
     check(!edge.handleMotion(event(0,0,new int[]{37},0,physicalBottom+1)),"pause height stays unchanged");
     check(!edge.handleMotion(event(0,0,new int[]{37},-1,physicalY)),"pause does not extend beyond the physical screen");
    }
    edge.setInGame(false);
    edge.setPauseHint(true);Canvas menu=new Canvas();edge.onDraw(menu);check(menu.hint==null,"countdown hint cannot leak into menus");
    check(!edge.handleMotion(event(0,0,new int[]{37},0,physicalY)),"edge pause does not intercept menus");
    edge.setInGame(true);edge.beginEdit();int pauses=edgeActivity.pauseCount;
    Canvas editing=new Canvas();edge.onDraw(editing);check(editing.hint==null,"editor keeps its own pause preview");
    edge.handleMotion(event(0,0,new int[]{37},0,physicalY));edge.handleMotion(event(1,0,new int[]{37},0,physicalY));
    check(edgeActivity.pauseCount==pauses,"edge touch cannot pause in the layout editor");edge.endEdit(false);
   }
   c.setSteeringMode(DrivingControls.STEERING_STICK);
  // Original Crashday View Controls: literal XInput masks, independent of overlay constants.
  String[] actionIds={"a","b","x","y","lb","rb","look_back","start"};
  int[] actionMasks={0x1000,0x2000,0x4000,0x8000,0x0100,0x0200,0x0002,0x0010};
  int[] fallbackKeys={'V',32,'C','R',0,0,0,27};
  for(int i=0;i<actionIds.length;++i){
   int resets=GameActivity.controllerResets;
   DrivingControls.Control control=null;for(DrivingControls.Control b:c.controls)if(b.id.equals(actionIds[i]))control=b;
   check(control!=null&&!control.hidden(),"original action is exposed: "+actionIds[i]);
   c.handleTransformedMotion(event(0,0,new int[]{23},control.cx,control.cy));
   if(actionIds[i].equals("y")){check(GameActivity.buttons==0,"recover does not fire on a brief touch");((DrivingControls.ButtonControl)control).recoverHold.run();}
   check(GameActivity.buttons==actionMasks[i],"original Crashday binding: "+actionIds[i]);
   if(fallbackKeys[i]!=0)check(GameActivity.keys.contains(fallbackKeys[i]),"original keyboard fallback: "+actionIds[i]);
   c.handleTransformedMotion(event(1,0,new int[]{23},control.cx,control.cy));
   check(GameActivity.buttons==0,"action releases: "+actionIds[i]);
   check(GameActivity.controllerResets==resets,"normal UP retains native short-tap latch: "+actionIds[i]);
  }
  check(c.rightStick.hidden(),"original automatic transmission has no donor gear stick");
  c.handleTransformedMotion(event(0,0,new int[]{23},c.leftTrigger.cx,c.leftTrigger.cy));
  check(GameActivity.lt==1&&GameActivity.rt==0,"original brake uses left trigger");
  c.handleTransformedMotion(event(1,0,new int[]{23},c.leftTrigger.cx,c.leftTrigger.cy));
  check(GameActivity.lt==0,"brake releases");
  float sx=c.leftStick.cx,sy=c.leftStick.cy,gx=c.rightTrigger.cx,gy=c.rightTrigger.cy;
  c.handleTransformedMotion(event(0,0,new int[]{8},sx,sy));
  c.handleTransformedMotion(event(5,1,new int[]{8,17},sx,sy,gx,gy));check(GameActivity.rt==1,"gas held");
  c.handleTransformedMotion(event(2,0,new int[]{17,8},gx,gy,sx+100,sy+200));check(GameActivity.lx>.4f&&GameActivity.rt==1,"reordered pointers and horizontal-only steering");
  DrivingControls.Control mg=null;for(DrivingControls.Control b:c.controls)if(b.id.equals("rb"))mg=b;
  c.handleTransformedMotion(event(2,0,new int[]{8,17},sx+100,sy,mg.cx,mg.cy));check(GameActivity.rt==1&&(GameActivity.buttons&0x200)!=0,"gas slide holds fire");
  c.handleTransformedMotion(event(6,1,new int[]{8,17},sx+100,sy,mg.cx,mg.cy));check(GameActivity.rt==0&&GameActivity.buttons==0&&GameActivity.lx>.4f,"releasing pedal keeps steering");
  c.handleTransformedMotion(event(2,0,new int[]{99},0,0));check(GameActivity.lx==0,"missing owner releases");
  c.setSafeInsets(120,12,44,25);sx=c.leftStick.cx;sy=c.leftStick.cy;
  float px=sx,py=sy;
  c.handleMotion(event(0,0,new int[]{8},px,py));check(c.leftStick.inUse,"safe area input hits drawn centre");
  Canvas canvas=new Canvas();c.onDraw(canvas);check(canvas.firstScaleX==1&&canvas.firstScaleY==1,"controls keep full-display drawing coordinates");
  int resets=GameActivity.controllerResets;
  c.handleMotion(event(3,0,new int[]{8},px,py));check(c.pointers.size()==0&&GameActivity.lx==0&&GameActivity.rt==0,"cancel clears all");
  check(GameActivity.controllerResets==resets+1,"cancel clears native pending button edges");
  c.beginEdit();check(c.currentLayout()==DrivingControls.DRIVING,"settings edit opens race layout");
  c.selected=c.leftTrigger;c.selected.moveTo(-100,2000);c.selected.personalized=true;c.selected.userHidden=true;c.opacity=.4f;c.floatingSteering=false;c.endEdit(true);
  DrivingControls restored=create(a,2424,1080);check(restored.leftTrigger.hidden()&&restored.opacity==.4f&&!restored.floatingSteering,"save restores hidden/opacity/steering");
  restored.beginEdit();check(!restored.leftTrigger.hidden(),"hidden button remains editable");restored.opacity=.9f;restored.leftTrigger.userHidden=false;restored.endEdit(false);
  check(restored.leftTrigger.hidden()&&restored.opacity==.4f,"cancel restores draft");
  restored.beginEdit();restored.leftTrigger.moveTo(1000,550);restored.leftTrigger.personalized=true;restored.leftTrigger.userHidden=false;
  restored.selected=restored.leftTrigger;restored.selected.scale=1.2f;restored.selected.fit();restored.editorPointer=17;restored.opacity=.6f;restored.floatingSteering=true;
  restored.setSafeInsets(40,10,70,5);
  check(restored.leftTrigger.cx==1000&&restored.leftTrigger.cy==550&&!restored.leftTrigger.userHidden,"insets retain editor draft");
  check(restored.selected==null&&restored.editorPointer==-1,"rebuild clears stale selected control and capture");
  restored.W=2000;restored.H=1000;restored.onSizeChanged(2000,1000,2424,1080);
  check(Math.abs(restored.leftTrigger.cx/2000f-1000f/2424)<.001f&&Math.abs(restored.leftTrigger.cy/1000f-550f/1080)<.001f,"resize keeps draft fractions");
  restored.setSteeringMode(DrivingControls.STEERING_STICK);
  check(restored.leftTrigger.personalized&&!restored.leftTrigger.userHidden&&restored.leftTrigger.scale==1.2f&&restored.opacity==.6f&&restored.floatingSteering,"resume setters retain complete draft");
  restored.setSafeInsets(0,0,0,0);restored.setSteeringMode(DrivingControls.STEERING_WHEEL);restored.setSteeringMode(DrivingControls.STEERING_STICK);
  check(Math.abs(restored.leftTrigger.cx/2000f-1000f/2424)<.001f&&!restored.leftTrigger.userHidden,"other draft layouts survive rebuild");
  restored.endEdit(false);check(restored.leftTrigger.hidden()&&restored.opacity==.4f&&!restored.floatingSteering,"cancel after lifecycle restores preferences");
  restored.beginEdit();restored.leftTrigger.moveTo(950,500);restored.leftTrigger.personalized=true;restored.leftTrigger.userHidden=false;restored.setSafeInsets(40,0,0,0);restored.endEdit(true);
  restored=create(a,2000,1000);check(!restored.leftTrigger.hidden()&&Math.abs(restored.leftTrigger.cx-950)<.01f,"save after lifecycle persists draft");
  check(restored.alpha==1,"pause remains visible without fading the whole view");
  restored.beginEdit();check(restored.alpha==1,"editor remains visible");
  check(restored.description.contains("editor"),"editor accessibility description");
  a.russian=true;check(restored.tr("SIZE").equals("РАЗМЕР")&&restored.tr("OPACITY").equals("ПРОЗРАЧНОСТЬ"),"localized editor measurement");
  check(restored.tr("HIDE BUTTON").equals("СКРЫТЬ КНОПКУ")&&restored.tr("GAS").equals("ГАЗ"),"localized buttons");
  restored.endEdit(false);check(restored.description.contains("Сенсорное"),"localized race description");
  restored.handleTransformedMotion(event(0,0,new int[]{8},restored.rightTrigger.cx,restored.rightTrigger.cy));
  check(restored.alpha==1,"held controls remain visible");
  c=create(new GameActivity(),2424,1080);
  c.handleTransformedMotion(event(0,0,new int[]{7},c.rightTrigger.cx,c.rightTrigger.cy));
  c.handleTransformedMotion(event(2,0,new int[]{7},c.leftTrigger.cx,c.leftTrigger.cy));
  check(GameActivity.rt==0&&GameActivity.lt==1&&c.pointers.get(7)==c.leftTrigger,"gas to brake releases throttle");
  c.handleTransformedMotion(event(2,0,new int[]{7},c.rightTrigger.cx,c.rightTrigger.cy));
  check(GameActivity.rt==1&&GameActivity.lt==0,"brake to gas transfers back");c.release();
  c.setWeaponsEnabled(0);check(mg!=null,"weapon fixture");
  for(DrivingControls.Control b:c.controls)if(b.id.equals("lb")||b.id.equals("rb"))check(b.hidden(),"unarmed vehicle hides weapons");
  c.beginEdit();
  for(DrivingControls.Control b:c.controls)if(b.id.equals("lb")||b.id.equals("rb"))check(!b.hidden(),"unarmed buttons remain editable");
  c.endEdit(false);
  c.setWeaponsEnabled(0x0200);
  for(DrivingControls.Control b:c.controls)if(b.id.equals("lb")||b.id.equals("rb"))check(b.hidden()==b.id.equals("lb"),"minigun can be available without missiles");
  c.setWeaponsEnabled(0x0100);
  for(DrivingControls.Control b:c.controls)if(b.id.equals("lb")||b.id.equals("rb"))check(b.hidden()==b.id.equals("rb"),"missiles can be available without a minigun");
  c.setWeaponsEnabled(0x0300);
  c=create(a,2424,1080);c.setSteeringMode(DrivingControls.STEERING_ARROWS);
  Canvas pauseCanvas=new Canvas();c.drawControl(pauseCanvas,c.controls.stream().filter(b->b.id.equals("start")).findFirst().get());
  check(pauseCanvas.draws==0,"pause is invisible during racing with the overlay enabled");
  GameActivity.hudHit=2;a.hudTap=0;
  check(c.handleTransformedMotion(event(0,0,new int[]{4},500,350)),"radar captures a pointer");
  c.handleTransformedMotion(event(1,0,new int[]{4},500,350));check(a.hudTap==2,"radar tap changes camera");
  a.hudTap=0;c.handleTransformedMotion(event(0,0,new int[]{4},500,350));c.radar.lookHold.run();
  check(GameActivity.buttons==2,"radar hold looks back");
  c.handleTransformedMotion(event(5,1,new int[]{4,9},500,350,c.rightTrigger.cx,c.rightTrigger.cy));
  check(GameActivity.buttons==2&&GameActivity.rt==1,"look back and accelerator coexist");
  c.handleTransformedMotion(event(6,0,new int[]{4,9},500,350,c.rightTrigger.cx,c.rightTrigger.cy));
  check(GameActivity.buttons==0&&GameActivity.rt==1&&a.hudTap==0,"radar hold releases without switching camera or releasing gas");c.release();
  GameActivity.hudHit=1;c.handleTransformedMotion(event(0,0,new int[]{4},500,350));
  c.handleTransformedMotion(event(1,0,new int[]{4},500,350));check(a.hudTap==1,"tachometer tap recovers");
  a.hudTap=0;c.handleTransformedMotion(event(0,0,new int[]{4},500,350));c.release();
  check(a.hudTap==0&&!c.tachometer.inUse,"cancellation cannot recover the car");
  GameActivity.hudHit=2;c.handleTransformedMotion(event(0,0,new int[]{4},500,350));
  c.handleTransformedMotion(event(2,0,new int[]{4},800,350));c.radar.lookHold.run();
  c.handleTransformedMotion(event(1,0,new int[]{4},800,350));check(a.hudTap==0&&GameActivity.buttons==0,"radar drag cancels both actions");
  GameActivity.hudHit=0;c.publishWeaponHud(true);check(GameActivity.weaponMask==3,"both original weapon HUDs follow visible buttons");
  float oldAnchor=GameActivity.weaponAnchors[0];
  for(DrivingControls.Control b:c.controls)if(b.id.equals("lb"))b.moveTo(1200,400);
  c.publishWeaponHud(true);check(GameActivity.weaponAnchors[0]!=oldAnchor,"weapon HUD follows moved controls");
  for(DrivingControls.Control b:c.controls)if(b.id.equals("lb")||b.id.equals("rb")){
   int i=b.id.equals("lb")?0:3;RectF hudBounds=new RectF();b.bounds(hudBounds);
   check((GameActivity.weaponAnchors[i+1]+GameActivity.weaponAnchors[i+2]*.5f)*c.height<hudBounds.top,"ammo and readiness stay entirely above the touch button");
  }
  c.setWeaponsEnabled(0x200);c.publishWeaponHud(true);check(GameActivity.weaponMask==2,"unavailable weapon HUD is hidden");
  c.publishWeaponHud(false);check(GameActivity.weaponMask==-1,"disabled touch controls restore stock weapon HUD");
  GameActivity dimensionActivity=new GameActivity();c=create(dimensionActivity,2424,1080);c.beginEdit();
  c.selected=c.leftArrow;RectF dimensions=new RectF();c.selected.bounds(dimensions);float oldWidth=dimensions.width(),oldHeight=dimensions.height();
  c.changeDimension(true,.2f);c.selected.bounds(dimensions);
  check(Math.abs(dimensions.width()/oldWidth-1.2f)<.001f&&dimensions.height()==oldHeight,"width changes independently");
  c.changeDimension(false,.3f);c.selected.bounds(dimensions);check(Math.abs(dimensions.height()/oldHeight-1.3f)<.001f,"height changes independently");
  c.selected.moveTo(300,700);c.endEdit(true);c=create(dimensionActivity,2424,1080);
  check(c.leftArrow.stretchX==1.2f&&c.leftArrow.stretchY==1.3f&&c.leftArrow.cx==300,"independent dimensions persist");
  c.beginEdit();c.selected=c.leftArrow;c.changeDimension(true,.4f);c.endEdit(false);check(c.leftArrow.stretchX==1.2f,"dimension cancel");
  c.beginEdit();c.setSafeInsets(120,0,0,0);c.leftArrow.moveTo(75,650);c.leftArrow.personalized=true;c.endEdit(true);
  c=create(dimensionActivity,2424,1080);c.setSafeInsets(120,0,0,0);
  check(c.leftArrow.cx==75,"saved control remains in the cutout strip");
  c.handleMotion(event(0,0,new int[]{4},75,650));check(GameActivity.lx==-1,"cutout strip receives unscaled input");c.release();
  c.beginEdit();c.setSteeringMode(DrivingControls.STEERING_WHEEL);c.endEdit(false);
  check(c.steeringMode==DrivingControls.STEERING_ARROWS,"cancel restores steering mode");
  c.setSteeringMode(DrivingControls.STEERING_WHEEL);DrivingControls.Wheel wheel=c.steeringWheel;
  wheel.press(wheel.cx+wheel.radius,wheel.cy);wheel.move(wheel.cx,wheel.cy+wheel.radius);c.sendState();
  check(Math.abs(GameActivity.lx-2f/3)<.001f,"quarter-turn wheel maps continuously to steering");
  wheel.move(wheel.cx-wheel.radius,wheel.cy);c.sendState();check(GameActivity.lx==1,"wheel clamps to full lock");
  wheel.release();c.sendState();check(GameActivity.lx==0,"wheel release centres steering");
  wheel.press(wheel.cx-wheel.radius,wheel.cy+1);wheel.move(wheel.cx-wheel.radius,wheel.cy-1);
  check(Math.abs(wheel.value)<.02f,"wheel unwraps across 180 degrees");c.release();
  c.setSteeringMode(DrivingControls.STEERING_ARROWS);c.setMinigunCruise(true);
  DrivingControls.Minigun minigun=(DrivingControls.Minigun)c.controls.stream().filter(b->b.id.equals("rb")).findFirst().get();
  minigun.press(minigun.cx,minigun.cy);minigun.up();SystemClock.now+=100;minigun.press(minigun.cx,minigun.cy);minigun.up();c.sendState();
  check(c.minigunLatched&&GameActivity.buttons==0x200,"double tap latches minigun after release");
  Canvas autoCanvas=new Canvas();c.onDraw(autoCanvas);
  check("AUTO".equals(autoCanvas.autoText)&&autoCanvas.autoColor==DrivingControls.CRUISE_COLOR&&autoCanvas.autoAlpha==255,"latched cruise has an opaque distinct AUTO indicator");
  check(c.description.contains("Minigun cruise active"),"cruise state is accessible");
  ((GameActivity)c.getContext()).russian=true;autoCanvas=new Canvas();c.onDraw(autoCanvas);
  check("АВТО".equals(autoCanvas.autoText),"cruise indicator follows the UI language");((GameActivity)c.getContext()).russian=false;
  c.handleTransformedMotion(event(0,0,new int[]{19},minigun.cx,minigun.cy));
  check(!c.minigunLatched&&GameActivity.buttons==0,"cancel on DOWN stops firing before release or any timer");
  check(!c.description.contains("Minigun cruise active"),"accessible cruise state clears immediately");
  c.advance(1000);check(!c.minigunLatched&&GameActivity.buttons==0,"held cancel gesture cannot reactivate cruise");
  autoCanvas=new Canvas();c.onDraw(autoCanvas);check(autoCanvas.autoText==null,"cancel removes AUTO on the next draw");
  c.handleTransformedMotion(event(1,0,new int[]{19},minigun.cx,minigun.cy));
  minigun.press(minigun.cx,minigun.cy);c.sendState();check(GameActivity.buttons==0x200,"fresh manual press still fires");
  autoCanvas=new Canvas();c.onDraw(autoCanvas);check(autoCanvas.autoText==null,"manual fire has no cruise indicator");
  minigun.up();c.sendState();
  c.rightTrigger.press(c.rightTrigger.cx,c.rightTrigger.cy);c.rightTrigger.move(minigun.cx,minigun.cy);c.sendState();
  check(!c.minigunLatched&&GameActivity.rt==1&&GameActivity.buttons==0x200,"gas swipe fires immediately without latching");
  c.advance(299);check(!c.minigunLatched,"cruise waits the full 300 ms");
  c.advance(1);
  check(c.minigunLatched&&GameActivity.rt==1,"gas swipe latches minigun and keeps gas");
  c.rightTrigger.move(minigun.cx+1,minigun.cy);check(c.minigunLatched,"moves within minigun do not toggle again");
  c.rightTrigger.move(c.rightTrigger.cx,c.rightTrigger.cy);c.rightTrigger.release();c.sendState();
  check(GameActivity.buttons==0x200&&GameActivity.rt==0,"swipe latch survives gas release");
  c.rightTrigger.press(c.rightTrigger.cx,c.rightTrigger.cy);c.rightTrigger.move(minigun.cx,minigun.cy);c.sendState();
  check(!c.minigunLatched&&GameActivity.buttons==0&&GameActivity.rt==1&&c.callbacks.isEmpty(),"gas swipe cancels cruise and firing immediately, retaining gas");
  c.rightTrigger.move(minigun.cx+1,minigun.cy);c.advance(1000);c.sendState();
  check(!c.minigunLatched&&GameActivity.buttons==0,"remaining over minigun after cancel never restarts firing or a timer");
  c.rightTrigger.move(c.rightTrigger.cx,c.rightTrigger.cy);c.rightTrigger.move(minigun.cx,minigun.cy);c.sendState();
  check(GameActivity.buttons==0x200&&!c.minigunLatched,"new entry starts manual fire after cancel");
  c.advance(299);check(!c.minigunLatched,"new activation still waits 300 ms");c.advance(1);check(c.minigunLatched,"new entry can latch again");
  c.release();check(!c.minigunLatched&&GameActivity.buttons==0,"lifecycle cancel releases latched minigun");
  c.handleTransformedMotion(event(0,0,new int[]{11},c.rightTrigger.cx,c.rightTrigger.cy));
  c.handleTransformedMotion(event(2,0,new int[]{11},minigun.cx,minigun.cy));c.advance(300);
  c.handleTransformedMotion(event(5,1,new int[]{11,22},minigun.cx,minigun.cy,minigun.cx,minigun.cy));
  check(!c.minigunLatched&&GameActivity.buttons==0&&GameActivity.rt==1,"second finger cancels both cruise and the held gas-slide fire");
  c.handleTransformedMotion(event(6,1,new int[]{11,22},minigun.cx,minigun.cy,minigun.cx,minigun.cy));
  c.handleTransformedMotion(event(2,0,new int[]{11},minigun.cx+1,minigun.cy));c.advance(1000);
  check(GameActivity.buttons==0&&!c.minigunLatched,"held gas finger stays suppressed after the cancelling finger releases");c.release();
  c.rightTrigger.press(c.rightTrigger.cx,c.rightTrigger.cy);c.rightTrigger.move(minigun.cx,minigun.cy);c.advance(200);
  c.rightTrigger.move(c.rightTrigger.cx,c.rightTrigger.cy);c.advance(200);check(!c.minigunLatched,"leaving minigun cancels pending latch");
  c.rightTrigger.move(minigun.cx,minigun.cy);c.advance(200);c.release();c.advance(100);
  check(!c.minigunLatched&&c.callbacks.isEmpty(),"release cancels the delayed latch");
  c.setSteeringMode(DrivingControls.STEERING_WHEEL);wheel=c.steeringWheel;
  ((GameActivity)c.getContext()).turnSensitivity=5;wheel.value=.8f;c.sendState();check(Math.abs(GameActivity.lx-.4f)<.0001f,"wheel shares sensitivity");
  c.setSteeringMode(DrivingControls.STEERING_STICK);c.leftStick.xValue=.8f;c.sendState();check(Math.abs(GameActivity.lx-.4f)<.0001f,"virtual stick shares sensitivity");
  c=create(new GameActivity(),2424,1080);c.setHardwareInput(true);
  GameActivity.buttons=0x1000;GameActivity.rt=.75f;c.sendState();c.setWeaponsEnabled(0);c.release();
  check(GameActivity.buttons==0x1000&&GameActivity.rt==.75f&&c.isEnabled(),"visible touch controls preserve active physical input");
  c.setHardwareInput(false);check(GameActivity.buttons==0&&GameActivity.rt==0&&c.isEnabled(),"touch takes ownership without changing visibility preference");
  System.out.println("PASS production controls: 45 layouts, arrows/owners, utility positions, safe area, gas/fire, AUTO indicator/accessibility, 300 ms activation, immediate tap/swipe/multitouch cancellation, editor, localization and physical input ownership");
 }
}
'''


class DrivingControlsTest(unittest.TestCase):
    def test_production_overlay(self):
        source = Path(os.environ.get("CRASHDAY_CONTROLS_SOURCE", ROOT / "android/app/src/org/crashday/port/DrivingControls.java")).read_text(encoding="utf-8")
        source = re.sub(r"(?m)^(?:package|import) .*;\s*", "", source)
        source = source.replace("final class DrivingControls extends", "static final class DrivingControls extends", 1)
        for namespace in ("android.graphics.", "android.os.", "android.view."):
            source = source.replace(namespace, "")
        OUT.mkdir(parents=True, exist_ok=True)
        probe = OUT / "DrivingControlsProbe.java"
        from test_menu_gestures import method
        pad = (ROOT / "android/app/src/org/crashday/port/GamepadInput.java").read_text(encoding="utf-8")
        probe.write_text(HARNESS.replace("/* PRODUCTION */", source).replace("/* STEERING */", method(pad, "static float steering(")), encoding="utf-8")
        java = Path("C:/Portable/jdk-24.0.1/bin")
        for command in ([java / "javac.exe", "-encoding", "UTF-8", "-d", OUT, probe],
                        [java / "java.exe", "-cp", OUT, "DrivingControlsProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
