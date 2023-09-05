#include "GameEngine.h"

namespace SplashkitGameEngine {

    GameEngine::GameEngine() {}

    GameEngine::~GameEngine() {}

    void GameEngine::SetGameStateManager(std::unique_ptr<IGameStateManager> manager) {
        this->gameStateManager = std::move(manager);
    }

    void GameEngine::SetLogger(std::unique_ptr<ILogger> logger) {
        this->logger = std::move(logger);
    }

    void GameEngine::Start() {
        // Implementation of the game startup logic
        if (logger) {
            logger->Log("GameEngine started.");
        }
    }

    void GameEngine::Update() {
        // Implementation of the game update logic
        if (gameStateManager) {
            gameStateManager->Update();
        }
    }

    void GameEngine::Draw() {
        // Implementation of the game drawing/rendering logic
        if (gameStateManager) {
            //gameStateManager->Draw();
        }
    }

} // namespace SplashkitGameEngine
