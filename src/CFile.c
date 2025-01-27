#include <jni.h>
#include <stdio.h>
//Include the created 'JNIDemo' Header file
#include "JNIDemo.h"

// Implementation of the native method
JNIEXPORT void JNICALL Java_JNIDemo_printText(JNIEnv *env, jobject obj, jint a, jint b) {
    printf("Hello World, %d + %d = %d\n", a, b, a+b);
}

