#pragma once
#include "IGameEngine.h"
#include "ILogger.h"
#include <memory>

namespace SplashkitGameEngine {

    class GameEngine : public IGameEngine {
    private:
        std::unique_ptr<IGameStateManager> gameStateManager;
        std::unique_ptr<ILogger> logger;

    public:
        // Constructor
        GameEngine();

        // Destructor
        ~GameEngine() override;

        // Implementation of the interface functions
        void SetGameStateManager(std::unique_ptr<IGameStateManager> manager);
        void SetLogger(std::unique_ptr<ILogger> logger);
        void Start() override;
        void Update() override;
        void Draw() override;
    };

} // namespace SplashkitGameEngine