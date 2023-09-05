#include "Transform.h"

namespace SplashkitGameEngine {

    Transform::Transform(GameObject* gameObject)
        : IComponent(), childCount(0), hasChanged(false), localPosition(Vector2D(0, 0)), parent(gameObject), up(Vector2D(0, 1)), forward(Vector2D(1, 0)) {}

    Transform::~Transform() {}

    void Transform::Awake() {
        // Implementation for Transform::Awake()
    }

    void Transform::Start() {
        // Implementation for Transform::Start()
    }

    void Transform::Update() {
        // Implementation for Transform::Update()
    }

    void Transform::Translate() {
        // Implementation for Transform::Translate()
    }

} // namespace SplashkitGameEngine