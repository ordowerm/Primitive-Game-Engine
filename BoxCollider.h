#pragma once
#include "Collider.h"
class BoxCollider :
    public Collider
{
private:
    bool GetBoxCollision(Collider*) override;
    /*
    TO-DO:
    implement helper functions for box collision check --> use separate-axis theorem
    */

public:
    Vect2 size; //length x height
    Vect2 bounds[4]; //vertices of bounding box
    bool GetCollision(Collider* c) override;

};

