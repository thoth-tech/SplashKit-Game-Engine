#pragma once
#include "IGameEngine.h"
#include <memory>

namespace SplashkitGameEngine
{

    class Game
    {
    private:
        std::unique_ptr<IGameEngine> gameEngine; // Pointer to IGameEngine interface

    public:
        // Constructor
        Game(std::unique_ptr<IGameEngine> engine) : gameEngine(std::move(engine)) {}

        // Destructor (if needed)
        ~Game() = default;
    };
}