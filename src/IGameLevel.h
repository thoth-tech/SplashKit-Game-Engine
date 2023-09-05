#pragma once
#include <vector>

namespace SplashkitGameEngine {
    // Forward declaration of GameObject to avoid circular inclusion
    class GameObject;

    class IGameLevel {
    public:
        virtual ~IGameLevel() {} // Virtual destructor for correct polymorphic behavior
        virtual void AddGameObject(GameObject* gameObject) = 0;
        virtual void RemoveGameObject(GameObject* gameObject) = 0;
        virtual const std::vector<GameObject*>& GetGameObjects() const = 0;
    };
}