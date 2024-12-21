#include <jni.h>
#include "react-native-ulid.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ulid_UlidModule_generateULID(JNIEnv *env, jobject thiz) {
    std::string ulid = ulid::generateULID();

    return env->NewStringUTF(ulid.c_str());
}
