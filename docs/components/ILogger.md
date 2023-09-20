# ILogger

## Description

An interface for handling custom logging implementations within the game engine.

## Properties

| **Name**      | **Description**                                      |
| ------------- | ---------------------------------------------------- |
| filterLogType | Enables selective logging of specific message types. |
| logEnabled    | Toggles debug logging on or off during runtime.      |

## Public Methods

| **Name**         | **Description**                                                              |
| ---------------- | ---------------------------------------------------------------------------- |
| IsLogTypeAllowed | Checks whether logging is enabled based on the given `LogType`.              |
| Log              | Logs a message to the game engine's logging system using the default logger. |
| LogError         | A variation of `Log` specifically for logging error messages.                |
| LogException     | A variation of `Log` designed for logging exception messages.                |
| LogFormat        | Logs a formatted message using placeholders for dynamic values.              |
| LogWarning       | A variation of `Log` used for logging warning messages.                      |

## LogLevel Enum

The `LogLevel` enum provides a standardized way of categorizing the severity of log messages. This
enum includes the following values:

-   `Info`: Represents informative log messages.
-   `Warning`: Represents warning log messages.
-   `Error`: Represents error log messages.

Developers can use the `LogLevel` enum to specify the severity of log messages when calling logger
methods, making the logging system more organized and easier to manage.

## Remarks

The `ILogger` interface serves as a framework for incorporating logging functionality into the game
engine. By implementing this interface, custom loggers can be integrated into the engine's logging
pipeline. The interface includes methods for logging different message types such as errors,
warnings, and exceptions, and for formatting messages with dynamic values. The interface also offers
options to control which message types are logged and whether logging is enabled or disabled during
runtime.
