#pragma once
#include <memory>
#include "IGameStateManager.h"
#include "ILogger.h"
#include "IRenderer.h"

namespace SplashkitGameEngine {
    class IGameEngine {
    public:
        // Destructor
        virtual ~IGameEngine() = default;

        // Initialization method
        virtual bool Initialize() = 0;

        // Set the game state manager (implementation in derived classes)
        virtual void SetGameStateManager(std::unique_ptr<IGameStateManager> manager) = 0;

        // Get the game state manager (implementation in derived classes)
        virtual IGameStateManager* GetGameStateManager() const = 0;

        // Set the logger (implementation in derived classes)
        virtual void SetLogger(std::unique_ptr<ILogger> logger) = 0;

        // Get the logger (implementation in derived classes)
        virtual ILogger* GetLogger() const = 0;

        // Set the renderer (implementation in derived classes)
        virtual void SetRenderer(std::unique_ptr<IRenderer> renderer) = 0;

        // Get the renderer (implementation in derived classes)
        virtual IRenderer* GetRenderer() const = 0;

        // Start the game (implementation in derived classes)
        virtual void Start() = 0;

        // Stop the game (implementation in derived classes)
        virtual void Stop() = 0;

        // Check if the game is running (implementation in derived classes)
        virtual bool IsRunning() const = 0;

        // Update the game (implementation in derived classes)
        virtual void Update() = 0;

        // Handle game events (implementation in derived classes)
        virtual void HandleEvents() = 0;

        // Draw/render the game (implementation in derived classes)
        virtual void Draw() = 0;
    };
}
