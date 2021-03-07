#pragma once
#include <math.h>
#include <iostream>

class Vect2
{
	public:
		double x;
		double y;

		//operations
		Vect2 operator+(const Vect2&);
		Vect2 operator-(const Vect2&);
		Vect2 operator*(const double&);
		Vect2 operator/(const double&);
		bool operator==(const Vect2&);
		static double dot(const Vect2&, const Vect2&);
		void normalize();
		double norm();

		//constructors
		Vect2();
		Vect2(double a, double b);
		

		//misc
		Vect2 GetUnit(); //return unit vector
		void Print(); //print to console
};

Vect2 operator*(const double&, const Vect2&);