#pragma once
#include "ILogger.h"

namespace SplashkitGameEngine {

    class ConsoleLogger : public ILogger {
    public:
        // Log a general message
        void Log(const std::string& message) override;

        // Log an error message
        void LogError(const std::string& message) override;

        // Log an exception message
        void LogException(const std::string& message) override;

        // Log a formatted message
        void LogFormat(const std::string& format, ...) override;

        // Log a warning message
        void LogWarning(const std::string& message) override;

        ConsoleLogger() = default;
    };

} // namespace SplashkitGameEngine