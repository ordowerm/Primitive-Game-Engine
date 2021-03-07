#pragma once
class PhysicsContext
{
private:
	static PhysicsContext* instance;
	PhysicsContext();
	
	double gravity;
	double timestep;
	double collision_precision; //when checking for collisions, repeatedly check
public:
	static PhysicsContext* Get();
};

