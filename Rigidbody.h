#pragma once
#include "Vect2.h"
class Rigidbody
{
public:
	//fields

	Vect2 velocity;
	Vect2 position;
	double rotational_velocity;
	double rotation;
	double mass;
	bool apply_gravity;


	//constructors
	Rigidbody();


	void Update(double timestep);
	
	Vect2 AddForce(Vect2 v);
};

