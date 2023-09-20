#include "Game.h"
// #include "core.h"
#include "splashkit.h"
#include "SKGameEngine.h"
#include "ConsoleLogger.h"
#include "SplashkitRenderer.h"
#include "SplashkitWindowManager.h"

int main()
{
	std::unique_ptr<IWindowManager> windowManager = std::make_unique<SplashkitGameEngine::SplashkitWindowManager>();
	windowManager->open_window("Test Window", 800, 600);
	::delay(1000);
	std::unique_ptr<SplashkitGameEngine::IGameEngine> gameEngine = std::make_unique<SplashkitGameEngine::SKGameEngine>();
	// gameEngine->SetLogger(std::make_unique<SplashkitGameEngine::ConsoleLogger>());
	// gameEngine->SetRenderer(std::make_unique<SplashkitGameEngine::SplashkitRenderer>(800, 600));
	// gameEngine->Start();
	return 0;
}
