#include "SplashkitRenderer.h"
#include <iostream> // For console output (for demonstration purposes)

namespace SplashkitGameEngine {

    // Constructor with parameters for width and height
    SplashkitRenderer::SplashkitRenderer(int width, int height) : width(width), height(height) { 
        // Other initialization code if needed
    }

    SplashkitRenderer::~SplashkitRenderer() {
        // Destructor (if needed)
    }

    void SplashkitRenderer::Init() {
        std::cout << "Splashkit Renderer Initialized" << std::endl;
        // Add initialization code for the actual rendering system (if needed)
    }

    void SplashkitRenderer::Clear() {
        std::cout << "Clearing Splashkit Renderer" << std::endl;
        // Add clearing code for the actual rendering system (if needed)
    }

    void SplashkitRenderer::RenderObject(const GameObject& object) {
        // For demonstration purposes, display the object's name
        //std::cout << "Rendering GameObject: " << object.GetName() << std::endl;
        // Add rendering code for the actual rendering system (if needed)
    }

    void SplashkitRenderer::Present() {
        std::cout << "Presenting Splashkit Renderer" << std::endl;
        // Add presenting code for the actual rendering system (if needed)
    }

    void SplashkitRenderer::Shutdown() {
        std::cout << "Shutting Down Splashkit Renderer" << std::endl;
        // Add shutdown code for the actual rendering system (if needed)
    }

    void SplashkitRenderer::OpenWindow()
    {
    }

    void SplashkitRenderer::DrawWindow()
    {
    }

} // namespace SplashkitGameEngine
