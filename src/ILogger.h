#pragma once
#include <string>

namespace SplashkitGameEngine {

    class ILogger {
    public:
        // Destructor (make the base class destructor virtual)
        virtual ~ILogger() = default;

        // Log a general message
        virtual void Log(const std::string& message) = 0;

        // Log an error message
        virtual void LogError(const std::string& message) = 0;

        // Log an exception message
        virtual void LogException(const std::string& message) = 0;

        // Log a formatted message
        virtual void LogFormat(const std::string& format, ...) = 0;

        // Log a warning message
        virtual void LogWarning(const std::string& message) = 0;
    };

} // namespace SplashkitGameEngine