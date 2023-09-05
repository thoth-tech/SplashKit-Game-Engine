#pragma once
#include "GameObject.h"

namespace SplashkitGameEngine {

    class GameObject; // Forward declaration to resolve circular dependency

    class IComponent {
    protected:
        GameObject* gameObject;

    public:
        virtual ~IComponent() {} // Virtual destructor for correct polymorphic behavior

        // Setter for the parent GameObject
        void SetParent(GameObject* parent) {
            gameObject = parent;
        }

        virtual void Awake() = 0;
        virtual void Start() = 0;
        virtual void Update() = 0;
    };

} // namespace SplashkitGameEngine

