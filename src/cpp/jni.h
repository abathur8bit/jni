#include <jni.h>

#ifndef JNI_LIBRARY_H
#define JNI_LIBRARY_H

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL Java_App_add(JNIEnv *env, jobject obj, jint num);
JNIEXPORT jint JNICALL Java_App_print(JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif

#endif