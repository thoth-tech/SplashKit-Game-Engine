#include "Game.h"
//#include "core.h"
#include "SKGameEngine.h"
#include "ConsoleLogger.h"
#include "SplashkitRenderer.h"



int main() {
	std::unique_ptr<SplashkitGameEngine::IGameEngine> gameEngine = std::make_unique<SplashkitGameEngine::SKGameEngine>();
	gameEngine->SetLogger(std::make_unique<SplashkitGameEngine::ConsoleLogger>());
	gameEngine->SetRenderer(std::make_unique<SplashkitGameEngine::SplashkitRenderer>(800, 600));
	gameEngine->Start();
	return 0;
}
