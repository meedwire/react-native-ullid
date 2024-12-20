#include "ullid-generator.h"

std::string ULLIDGenerator::generate() {
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    uint64_t timestamp = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

    std::random_device rd;
    std::mt19937_64 generator(rd());
    uint64_t randomPart = generator();

    return toBase62(timestamp, 10) + toBase62(randomPart, 16);
}

std::string ULLIDGenerator::toBase62(uint64_t value, size_t length) {
    const char base62Chars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string result(length, '0');

    for (size_t i = 0; i < length; ++i) {
        result[length - i - 1] = base62Chars[value % 62];
        value /= 62;
    }

    return result;
}
