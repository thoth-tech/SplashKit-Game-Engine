#include "SKGameEngine.h"

namespace SplashkitGameEngine {

    SKGameEngine::SKGameEngine() : running(false) {}

    SKGameEngine::~SKGameEngine()
    {
        if (running) {
            Stop();
        }
    }

    bool SKGameEngine::Initialize() {
        // Implementation of initialization
        // ...
        Log("Initializing game engine.", "Log");
        return true; // Return true if initialization was successful
    }

    void SKGameEngine::SetGameStateManager(std::unique_ptr<IGameStateManager> manager) {
        this->gameStateManager = std::move(manager);
        Log("Set Game State Manager", "Debug");
    }

    IGameStateManager* SKGameEngine::GetGameStateManager() const {
        return gameStateManager.get();
    }

    void SKGameEngine::SetLogger(std::unique_ptr<ILogger> logger) {
        this->logger = std::move(logger);
        Log("Set Logger", "Debug");
    }

    ILogger* SKGameEngine::GetLogger() const {
        return logger.get();
    }

    void SKGameEngine::SetRenderer(std::unique_ptr<IRenderer> renderer) {
        this->renderer = std::move(renderer);
        Log("Set Renderer", "Debug");
    }

    IRenderer* SKGameEngine::GetRenderer() const {
        return renderer.get();
    }

    void SKGameEngine::Start() {
        // Implementation of starting the game
        Log("Starting game.", "Log");
        running = true;
        int count = 0;
        while (IsRunning()) {
            HandleEvents();
            Update();
            Draw();
            count++;
            if (count >= 15) {
                Stop();
            }
        }
    }

    void SKGameEngine::Stop() {
        // Implementation of stopping the game
        running = false;
        Log("Executing game shutdown procedures.", "Log");
        // Explicitly reset the unique_ptr
        gameStateManager.reset();
        if (renderer) {
            Log("Shutting down renderer.", "Debug");
            renderer->Shutdown();
        }
        logger.reset();
    }

    bool SKGameEngine::IsRunning() const {
        return running;
    }

    void SKGameEngine::Update() {
        // Implementation of game update
        // ...
        Log("Updating game.", "Debug");
    }

    void SKGameEngine::HandleEvents() {
        // Implementation of event handling
        // ...
        Log("Handling game events.", "Debug");
        if (gameStateManager) {
            gameStateManager->Update();
        }
        else {
            Log("No game state manager", "Error");
        }
    }

    void SKGameEngine::Draw() {
        // Implementation of game rendering
        // ...
        Log("Calling draw game state.", "Debug");
    }

    void SKGameEngine::Log(const std::string& message, const std::string& logLevel)
    {
        if (this->logger != nullptr) {
            std::string logMessage = "[" + logLevel + "] " + message;
            logger->Log(logMessage);
        }
    }

} // namespace SplashkitGameEngine

