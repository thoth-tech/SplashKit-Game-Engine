# IInputHandler

## Description

The `IInputHandler` interface serves as an entry point to the input system within the game engine.
It provides methods and properties for handling user input, allowing developers to create customized
input systems tailored to the game's requirements.

## Static Properties

| **Name**         | **Description**                                                                        |
| ---------------- | -------------------------------------------------------------------------------------- |
| anyKey           | Indicates if any key or mouse button is currently held down. (Read Only)               |
| anyKeyDown       | Returns `true` on the first frame when any key or mouse button is pressed. (Read Only) |
| inputString      | Returns the keyboard input entered in the current frame. (Read Only)                   |
| mousePosition    | The current mouse position in pixel coordinates. (Read Only)                           |
| mousePresent     | Indicates whether a mouse device is detected.                                          |
| mouseScrollDelta | The current mouse scroll delta. (Read Only)                                            |

## Static Methods

| **Name**           | **Description**                                                                                         |
| ------------------ | ------------------------------------------------------------------------------------------------------- |
| GetAxis            | Returns the value of the virtual axis identified by the `axisName`.                                     |
| GetAxisRaw         | Returns the raw value of the virtual axis identified by the `axisName` without smoothing filtering.     |
| GetButton          | Returns `true` while the virtual button identified by `buttonName` is held down.                        |
| GetButtonDown      | Returns `true` during the frame the user pressed down the virtual button identified by `buttonName`.    |
| GetButtonUp        | Returns `true` on the first frame when the user releases the virtual button identified by `buttonName`. |
| GetKey             | Returns `true` while the user holds down the key identified by `name`.                                  |
| GetKeyDown         | Returns `true` during the frame the user starts pressing down the key identified by `name`.             |
| GetKeyUp           | Returns `true` during the frame the user releases the key identified by `name`.                         |
| GetMouseButton     | Returns `true` if the given mouse button is held down.                                                  |
| GetMouseButtonDown | Returns `true` during the frame the user pressed the given mouse button.                                |
| GetMouseButtonUp   | Returns `true` during the frame the user releases the given mouse button.                               |
| ResetInputAxes     | Resets all input. After ResetInputAxes all axes return to 0 and all buttons return to 0 for one frame.  |
| ResetPenEvents     | Clears the pen event queue.                                                                             |

## Remarks

The `IInputHandler` interface facilitates interaction with user input within the game engine.
Developers can implement custom input systems that accommodate various control schemes, such as
keyboard, mouse, gamepad, and touch screen.

This interface provides access to input-related properties and methods, allowing for responsive and
adaptable user interactions. By adhering to SOLID design principles, developers can create modular
input systems that integrate seamlessly into the game's architecture.

**Note:** Input flags are not reset until the `Update` loop. All input calls should be made within
the `Update` loop to ensure consistent behavior.

## Example

```cpp
#include "IInputHandler.h"

class CustomInputHandler : public IInputHandler {
public:
    void Initialize() override {
        // Initialize input resources and components
    }

    void UpdateInput() override {
        // Update the input state based on user interactions
    }

    float GetAxis(const std::string& axisName) override {
        // Get the value of the specified input axis
        // Example: return axisValue;
    }

    bool GetButtonDown(const std::string& buttonName) override {
        // Check if the specified button is currently down
        // Example: return isButtonDown;
    }

    // … Implement other input methods …

    Vector2 GetMousePosition() override {
        // Get the current mouse position
        // Example: return mousePosition;
    }

    bool GetMouseButtonDown(MouseButton button) override {
        // Check if the specified mouse button is currently down
        // Example: return isMouseButtonDown;
    }
};

int main() {
    CustomInputHandler inputHandler;

    inputHandler.Initialize();

    // … Update and use input in the game loop …

    return 0;
}
```

The documentation above provides a comprehensive overview of the `IInputHandler` interface, enabling
developers to create versatile input systems for user interaction within the game engine.
