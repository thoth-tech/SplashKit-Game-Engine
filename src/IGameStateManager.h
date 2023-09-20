#pragma once
#include <stack>

namespace SplashkitGameEngine
{
    class IGameState;

    class IGameStateManager
    {
    public:
        // Constructor
        IGameStateManager() = default;

        // Destructor (virtual to allow proper destruction of derived classes)
        virtual ~IGameStateManager() = default;

        // Change the current game state (implementation in derived classes)
        virtual void ChangeState() = 0;

        // Get a pointer to the current game state (implementation in derived classes)
        virtual IGameState *GetCurrentState() = 0;

        // Pop the current game state from the stack (implementation in derived classes)
        virtual void PopState() = 0;

        // Push a new game state onto the stack (implementation in derived classes)
        virtual void PushState() = 0;

        // Render the current game state (implementation in derived classes)
        virtual void Render() = 0;

        // Update the current game state (implementation in derived classes)
        virtual void Update() = 0;
    };
}
