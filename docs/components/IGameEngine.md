# IGameEngine

## Description

The `IGameEngine` interface serves as the core foundation for the game engine's functionality. It
encapsulates the essential components required for running a game, including rendering, state
management, input handling, and logging. This interface defines a consistent structure for game
engine implementations, enabling developers to create diverse and customizable game engines while
adhering to SOLID design principles.

## Properties

| **Name**        | **Description**                                                        |
| --------------- | ---------------------------------------------------------------------- |
| renderingSystem | The rendering system responsible for rendering game graphics.          |
| stateManager    | The state manager that handles game state transitions and updates.     |
| inputHandler    | The input handler responsible for processing user input.               |
| logger          | The logger interface used for logging messages within the game engine. |

## Public Methods

| **Name**   | **Description**                                                             |
| ---------- | --------------------------------------------------------------------------- |
| Initialize | Initializes the game engine and its core components.                        |
| Run        | Initiates the main game loop for updating, rendering, and input processing. |
| Shutdown   | Cleans up resources and gracefully shuts down the game engine.              |

## Events (if any)

| **Name**         | **Description**                                           |
| ---------------- | --------------------------------------------------------- |
| GameStarted      | Event triggered when the game engine has started running. |
| GamePaused       | Event triggered when the game engine is paused.           |
| GameStateChanged | Event triggered when the game state has changed.          |

## Remarks

The `IGameEngine` interface defines a standardized structure for implementing game engines. It
encapsulates the core systems required for a functional game, offering a foundation that facilitates
the integration of diverse components. By adhering to this interface, developers can ensure
modularity and extensibility while building game engines tailored to specific requirements.

**Note:** The implementation of specific methods and properties is left to concrete classes that
implement the `IGameEngine` interface.

## Example

```cpp
#include "IGameEngine.h"

class CustomGameEngine : public IGameEngine {
public:
    void Initialize() override {
        // Initialize the rendering system, state manager, input handler, logger, etc.
    }

    void Run() override {
        // Enter the main game loop and manage updates, rendering, and input.
    }

    void Shutdown() override {
        // Clean up resources and shut down the game engine gracefully.
    }

    // … Implement other methods and properties …

    void OnGameStarted() {
        // Handle game engine startup event.
    }

    void OnGamePaused() {
        // Handle game paused event.
    }

    void OnGameStateChanged() {
        // Handle game state change event.
    }
};

int main() {
    CustomGameEngine gameEngine;

    gameEngine.Initialize();
    gameEngine.Run();
    gameEngine.Shutdown();

    return 0;
}
```

The above documentation outlines the `IGameEngine` interface, which forms the basis for building
robust and customizable game engines. Developers can implement this interface to create game engines
with various features and functionalities while maintaining a consistent structure.
