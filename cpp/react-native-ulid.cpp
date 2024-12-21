#include "react-native-ulid.h"
#include "ulid-generator.h"

#include <random>
#include <sstream>
#include <iomanip>
#include <string>


namespace ulid {
	std::string generateULID() {
        return ULIDGenerator::generate();
	}
}
