#include "ConsoleLogger.h" // Include the header file for the implementation

#include <iostream> // For console logging

namespace SplashkitGameEngine {

    void ConsoleLogger::Log(const std::string& message) {
        std::cout << "[Log] " << message << std::endl;
    }

    void ConsoleLogger::LogError(const std::string& message) {
        std::cerr << "[Error] " << message << std::endl;
    }

    void ConsoleLogger::LogException(const std::string& message) {
        std::cerr << "[Exception] " << message << std::endl;
    }

    void ConsoleLogger::LogFormat(const std::string& format, ...) {
        // Implementation of LogFormat using variadic arguments and formatting goes here.
        // For simplicity, we used a non-variadic version in the previous response.
        std::cout << "[Formatted] " << format << std::endl;
    }

    void ConsoleLogger::LogWarning(const std::string& message) {
        std::cout << "[Warning] " << message << std::endl;
    }

} // namespace SplashkitGameEngine


