#include "PhysicsContext.h"

PhysicsContext* PhysicsContext::instance = nullptr;

PhysicsContext::PhysicsContext()
{
	gravity = -9.8;
	timestep = 1.0 / 60.0;
	collision_precision = 0.01;
}

PhysicsContext* PhysicsContext::Get()
{
	if (!instance) { instance = new PhysicsContext(); }
	return instance;
}
