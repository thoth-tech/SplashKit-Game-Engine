#pragma once
#include "IGameEngine.h"

#include <memory>

namespace SplashkitGameEngine {

    class SKGameEngine : public IGameEngine {
    private:
        std::unique_ptr<IGameStateManager> gameStateManager;
        std::unique_ptr<ILogger> logger;
        std::unique_ptr<IRenderer> renderer;
        bool running;

    public:
        // Constructor
        SKGameEngine();

        // Destructor
        virtual ~SKGameEngine();

        // Initialization method
        bool Initialize() override;

        // Set the game state manager
        void SetGameStateManager(std::unique_ptr<IGameStateManager> manager) override;

        // Get the game state manager
        IGameStateManager* GetGameStateManager() const override;

        // Set the logger
        void SetLogger(std::unique_ptr<ILogger> logger) override;

        // Get the logger
        ILogger* GetLogger() const override;

        // Set the renderer
        void SetRenderer(std::unique_ptr<IRenderer> renderer) override;

        // Get the renderer
        IRenderer* GetRenderer() const override;

        // Start the game
        void Start() override;

        // Stop the game
        void Stop() override;

        // Check if the game is running
        bool IsRunning() const override;

        // Update the game
        void Update() override;

        // Handle game events
        void HandleEvents() override;

        // Draw/render the game
        void Draw() override;

        // Helper function for logging messages
        void Log(const std::string& message, const std::string& logLevel = "Log");

    };

} // namespace SplashkitGameEngine
