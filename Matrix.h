#pragma once
#include <math.h>
#include "Vect2.h"

/*
Class representing a homogeneous 3x3 matrix.


*/
class Matrix
{
	public:
		static void RotateVect(Vect2*,double); //applies rotation to vect
		static void TranslateVect(Vect2* source, Vect2* translation);
};

