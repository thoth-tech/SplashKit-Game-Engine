#pragma once
namespace SplashkitGameEngine {
    // Forward declaration of other classes (if needed)
    class GameObject;

    class IRenderer {
    public:
        virtual ~IRenderer() = default;

        // Initialize the renderer (implementation in derived classes)
        virtual void Init() = 0;

        // Clear the screen or render target (implementation in derived classes)
        virtual void Clear() = 0;

        // Render a game object (implementation in derived classes)
        virtual void RenderObject(const GameObject& object) = 0;

        // Present/render the frame (implementation in derived classes)
        virtual void Present() = 0;

        // Shutdown and release resources (implementation in derived classes)
        virtual void Shutdown() = 0;

        virtual void OpenWindow() = 0;

        virtual void DrawWindow() = 0;
    };
}

