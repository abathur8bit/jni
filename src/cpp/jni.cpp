#include "jni.h"

#include <curses.h>

JNIEXPORT jint JNICALL Java_App_add(JNIEnv *env, jobject obj, jint num)
{
    return num+num;
}

JNIEXPORT jint JNICALL Java_App_print(JNIEnv * env, jobject obj, jstring string)
{

    const char *str = env->GetStringUTFChars(string, 0);
    printf("%s\n",str);
    (*env).ReleaseStringUTFChars(string, str);
    return 0;
}
