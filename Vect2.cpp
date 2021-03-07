#include "Vect2.h"

Vect2 Vect2::operator+(const Vect2& v)
{
	Vect2 result = *this;
	result.x += v.x;
	result.y += v.y;
	return result;
}

Vect2 Vect2::operator-(const Vect2& v)
{
	Vect2 result = *this;
	result.x -= v.x;
	result.y -= v.y;
	return result;
}

Vect2 Vect2::operator*(const double& d)
{
	Vect2 result = *this;
	result.x *= d;
	result.y *= d;
	return result;
}

Vect2 Vect2::operator/(const double& d)
{
	Vect2 result = *this;
	result.x /= d;
	result.y /= d;
	return result;
}

bool Vect2::operator==(const Vect2& v)
{
	return (x==v.x)&&(y==v.y);
}

void Vect2::normalize()
{
	double n = norm();
	x /= n;
	y /= n;
}

double Vect2::norm()
{
	return sqrt(x*x+y*y);
}

Vect2::Vect2()
{
	x = 0; y = 0;
}

Vect2::Vect2(double a, double b)
{
	x = a; y = b;
}

Vect2 Vect2::GetUnit()
{
	Vect2 unit = *this;
	unit.normalize();
	return unit;
}

void Vect2::Print()
{
	std::cout << "("<<x<<","<<y<<")"<<std::endl;
}

Vect2 operator*(const double& f, const Vect2& v)
{
	return Vect2(v.x * f, v.y * f);
}
