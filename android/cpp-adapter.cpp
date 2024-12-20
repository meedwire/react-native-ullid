#include <jni.h>
#include "react-native-ullid.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ullid_UllidModule_generateULLID(JNIEnv *env, jobject thiz) {
    std::string ullid = ullid::generateULLID();

    return env->NewStringUTF(ullid.c_str());
}
