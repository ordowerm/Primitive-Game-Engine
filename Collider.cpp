#include "Collider.h"

bool Collider::GetCollision(Collider* c)
{
	try {
		switch (c->type) {
		case BOX:
		default:
			return GetBoxCollision(c);
			break;
		case CAPSULE:
			return GetCapsuleCollision(c);
			break;
		case CIRCLE:
			return GetCircleCollision(c);
			break;
		}
	}
	catch (int exception) {
		std::cerr << "Error occurred while checking collisions." << std::endl;
	}
	return false;
}
