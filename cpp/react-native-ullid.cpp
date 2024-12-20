#include "react-native-ullid.h"
#include "ullid-generator.h"

#include <random>
#include <sstream>
#include <iomanip>
#include <string>


namespace ullid {
	std::string generateULLID() {
        return ULLIDGenerator::generate();
	}
}
