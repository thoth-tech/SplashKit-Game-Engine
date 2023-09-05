#include "GameObject.h"

namespace SplashkitGameEngine {

    GameObject::GameObject(std::string name, std::vector<IComponent*> components)
        : name(name), components(components), transform(nullptr) {}

    GameObject::~GameObject() {
        // Clean up the components
        for (auto component : components) {
            delete component;
        }
        components.clear();

        // Clean up the transform
        delete transform;
    }

    void GameObject::AddComponent(IComponent* component) {
        components.push_back(component);
    }

    GameObject* GameObject::GetComponent(std::string name) {
        for (auto component : components) {
            if (component->GetName() == name) {
                return component;
            }
        }
        return nullptr;
    }

    void GameObject::RemoveComponent(IComponent* component) {
        // Find the component pointer in the vector and remove it
        auto it = std::find(components.begin(), components.end(), component);
        if (it != components.end()) {
            components.erase(it);
            delete component;
        }
    }

} // namespace SplashkitGameEngine
