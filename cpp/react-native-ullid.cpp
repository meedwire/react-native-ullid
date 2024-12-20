#include <jni.h>
#include "react-native-ullid.h"
#include "ullid-generator.h"

#include <random>
#include <sstream>
#include <iomanip>
#include <string>


namespace ullid {
	jstring generateULLID(JNIEnv *env) {
        std::string ullid = ULLIDGenerator::generate();
		return env->NewStringUTF(ullid.c_str());
	}
}
