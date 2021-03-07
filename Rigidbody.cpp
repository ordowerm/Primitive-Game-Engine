#include "Rigidbody.h"

Rigidbody::Rigidbody()
{
	velocity = Vect2();
	position = Vect2();
	rotational_velocity = 0;
	rotation = 0;
	mass = 1;
	apply_gravity = 1;
}
