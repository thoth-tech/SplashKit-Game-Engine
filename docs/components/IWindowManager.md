---
title: IWindowManager Interface Documentation
aliases: [Window Manager Interface, Splashkit Integration]
tags: [programming, interface, window management]
created: 2023-09-18
description:
    Documentation on the IWindowManager interface and its usage for flexible API backend swaps.
---

# IWindowManager Interface Documentation

## Introduction

The `IWindowManager` interface is designed to encapsulate window management functionality, providing
a unified and flexible way to manage windows in the Splashkit Game Engine. It allows for easy
swapping of backend APIs while maintaining code flexibility. This documentation outlines the methods
and benefits of using this interface for window management.

## Interface Definition

The `IWindowManager` interface defines a set of methods for managing windows in your application.
These methods include operations like opening, closing, resizing, and manipulating windows. Here's a
brief overview of the interface methods:

-   `clear_window(window wind, color clr)`: Clears the specified window with the given color.

-   `close_all_windows()`: Closes all open windows.

-   `close_current_window()`: Closes the currently active window.

-   `close_window(const string &name)`: Closes the window with the specified caption.

-   `close_window(window wind)`: Closes the provided window.

-   `current_window()`: Retrieves the currently active window.

-   `current_window_has_border()`: Checks if the current window has a border.

-   `current_window_height()`: Retrieves the height of the current window.

-   `current_window_is_fullscreen()`: Checks if the current window is in fullscreen mode.

-   `current_window_position()`: Retrieves the position of the current window.

-   `current_window_toggle_border()`: Toggles the border of the current window.

-   `current_window_toggle_fullscreen()`: Toggles fullscreen mode for the current window.

-   `current_window_width()`: Retrieves the width of the current window.

-   `current_window_x()`: Retrieves the x-coordinate of the current window.

-   `current_window_y()`: Retrieves the y-coordinate of the current window.

... (and more)

## Benefits of Using the Interface

### Backend API Flexibility

One of the primary benefits of using the `IWindowManager` interface is its ability to support
multiple backend APIs. By implementing this interface and providing different backend
implementations, you can easily switch between different window management libraries or frameworks
without changing your application's core logic.

### Code Maintainability

Using the interface promotes code maintainability. When you need to switch to a different backend,
you only need to update the implementation of the interface without modifying the rest of your
codebase. This separation of concerns makes your code more modular and easier to maintain.

### Future-Proofing

As technology evolves, new window management libraries and frameworks may emerge. By using the
`IWindowManager` interface, you future-proof your application. When a new backend becomes available,
you can create a new implementation of the interface, allowing your application to stay up-to-date
without major code changes.

## Example Usage

Here's a simple example of how to use the `IWindowManager` interface in your C++ application:

```cpp
#include "IWindowManager.h"

int main() {
    // Create an instance of the window manager using the desired backend.
    IWindowManager* windowManager = new SplashkitWindowManager(); // Example backend implementation.

    // Open a window using the interface.
    windowManager->open_window("My Window", 800, 600);

    // Perform window operations using the interface methods.
    windowManager->clear_window(windowManager->current_window(), Color::Black);
    windowManager->resize_current_window(1024, 768);

    // Close the window.
    windowManager->close_current_window();

    // Clean up resources.
    delete windowManager;

    return 0;
}
```
