#ifndef ULID_GENERATOR_H
#define ULID_GENERATOR_H

#include <string>
#include <random>
#include <chrono>

class ULIDGenerator {
public:
    // Gera um ULID como uma string
    static std::string generate();

private:
    static std::string toBase62(uint64_t value, size_t length);
};

#endif // ULID_GENERATOR_H
