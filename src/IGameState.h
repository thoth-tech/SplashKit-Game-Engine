#pragma once


namespace SplashkitGameEngine {
    class IGameState {
    public:
        // Constructor
        IGameState() = default;

        // Destructor (virtual to allow proper destruction of derived classes)
        virtual ~IGameState() = default;

        // Update the game state (implementation in derived classes)
        virtual void update() = 0;

        // Draw/render the game state (implementation in derived classes)
        virtual void draw() = 0;
    };
}

