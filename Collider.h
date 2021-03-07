#pragma once
#include "Vect2.h"


/*
Since different algorithms are used to check for different types of collisions,
we store the colliders' type information. This is the enum used to denote different collider types.
The type is stored as a field in each Collider. 
*/
enum Collidertype
{
	BOX, CIRCLE, CAPSULE
};


/*
Collider architecture:
This hasn't been implemented yet, but my strategy for checking for collisions is as follows:

Each scene will contain a map of <integer id, Collider*> pairs.
When checking for collisions, iterate through the map and check for collisions with each pair.
If a collider is destroyed, notify the object containing the map. This will tell the map that the collider ID is now free.

Complexity: O(n^2)
*/
class Collider
{
protected:
	Collidertype type;
	int collider_id; //id number. Use this as a key to register this collider in the map.

	//abstract functions for implementing collider-specific collision checks
	virtual bool GetBoxCollision(Collider* bc);
	virtual bool GetCircleCollision(Collider* cc);
	virtual bool GetCapsuleCollision(Collider* cc);


public:
	Vect2 position; //position of center of collider
	double rotation;
	virtual bool GetCollision(Collider* c);
	Collidertype getType() { return type; }
};

