#include <jni.h>
#include "react-native-ullid.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_ullid_UllidModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return ullid::multiply(a, b);
}
