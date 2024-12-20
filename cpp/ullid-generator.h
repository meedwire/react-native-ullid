#ifndef ULLID_GENERATOR_H
#define ULLID_GENERATOR_H

#include <string>
#include <random>
#include <chrono>

class ULLIDGenerator {
public:
    // Gera um ULLID como uma string
    static std::string generate();

private:
    static std::string toBase62(uint64_t value, size_t length);
};

#endif // ULLID_GENERATOR_H
