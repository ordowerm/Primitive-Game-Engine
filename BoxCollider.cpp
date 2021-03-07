#include "BoxCollider.h"

bool BoxCollider::GetBoxCollision(Collider* c)
{
    BoxCollider* other = (BoxCollider*)c;
    return false;
}



bool BoxCollider::GetCollision(Collider* c)
{
    Collidertype ctype = c->getType(); //type information for other collider
    try {
        switch (ctype) {
        case CAPSULE:
            break;
        case CIRCLE:
            break;
        case BOX:
        default:
            return GetBoxCollision(c);
            break;

        }
    }
    catch(int exception) {
        std::cerr << "Error occurred while checking collision." << std::endl;
    }
    return false;
}
