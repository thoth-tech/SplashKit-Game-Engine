#pragma once
#include "IComponent.h"
#include "splashkit.h"

namespace SplashkitGameEngine {
    class Transform : public IComponent {
    private:
        int childCount;
        bool hasChanged;
        vector_2d localPosition;
        GameObject* parent;
        vector_2d up;
        vector_2d forward;

    public:
        Transform(GameObject* gameObject);
        virtual ~Transform();

        void Awake() override;
        void Start() override;
        void Update() override;
        void Translate();
    };
}