#pragma once
#include <string>
#include <vector>
#include <memory>
#include "IComponent.h"
#include "Transform.h"

namespace SplashkitGameEngine {
    class GameObject {
    private:
        std::string name;
        std::vector<std::unique_ptr<IComponent>> components;
        std::unique_ptr<Transform> transform;

    public:
        GameObject(std::string name, std::vector<IComponent*> components);
        virtual ~GameObject(); // Virtual destructor for correct polymorphic behavior

        void AddComponent(IComponent* component);
        GameObject* GetComponent(std::string name);
        void RemoveComponent(IComponent* component);

        virtual std::string ToString() const = 0;
    };

} // namespace SplashkitGameEngine