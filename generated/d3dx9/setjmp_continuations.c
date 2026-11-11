#include "functions.h"
extern __thread uint32_t g_setjmp_resume;

void sub_120D88A7(void);
void sub_120D8BDF(void);
void sub_120D972E(void);
void sub_120D9996(void);
void sub_121699F4(void);
void sub_1216AE66(void);

void sub_120D890E(void) {
    g_setjmp_resume = 0x120D890Eu;
    sub_120D88A7();
}

void sub_120D8C91(void) {
    g_setjmp_resume = 0x120D8C91u;
    sub_120D8BDF();
}

void sub_120D9781(void) {
    g_setjmp_resume = 0x120D9781u;
    sub_120D972E();
}

void sub_120D9A26(void) {
    g_setjmp_resume = 0x120D9A26u;
    sub_120D9996();
}

void sub_12169A3E(void) {
    g_setjmp_resume = 0x12169A3Eu;
    sub_121699F4();
}

void sub_12169B58(void) {
    g_setjmp_resume = 0x12169B58u;
    sub_121699F4();
}

void sub_1216AEB0(void) {
    g_setjmp_resume = 0x1216AEB0u;
    sub_1216AE66();
}

void sub_1216B034(void) {
    g_setjmp_resume = 0x1216B034u;
    sub_1216AE66();
}
