#pragma once
#include "IRenderer.h"

namespace SplashkitGameEngine {

    class SplashkitRenderer : public IRenderer {

    private:
        int width;
        int height;

    public:
        // Constructor and Destructor
        SplashkitRenderer(int width, int height);
        virtual ~SplashkitRenderer();

        // IRenderer interface implementations
        void Init() override;
        void Clear() override;
        void RenderObject(const GameObject& object) override;
        void Present() override;
        void Shutdown() override;
        void OpenWindow() override;
        void DrawWindow() override;
    };

} // namespace SplashkitGameEngine
