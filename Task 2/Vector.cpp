#include "Vector.h"
#include <math.h>
//construct
Vector::Vector(void) 
{

};

Vector::Vector(float myx, float myy, float myz)
{
	x = myx;
	y = myy;
	z = myz;
}
void Vector::Scale(float s)
{
	x = s*x;
	y = s*y;
	z = s*z;
}
void Vector::Add(Vector & v1, Vector & v2)
{
	v1.x = v2.x + v1.x;
	v1.y = v2.y + v1.y;
	v1.z = v2.z + v1.z;
}
Vector Vector::getVector(void)
{
	return Vector(x, y, z);
}
void Vector::Add(Vector & v1)
{
	x = x + v1.x;
	y = y + v1.y;
	z = z + v1.z;
}

float Vector::distanceBetweenTwoPoints(Vector & p0, Vector & p1)
{
	// Find the length of the vector by subtracting each of the x, y and z positions 
	this->x = (p1.x - p0.x); 
	this->y = (p1.y - p0.y);
	this->z = (p1.z - p0.z);

	// Square the results
	this->x = this->x * this->x;
	this->y = this->y * this->y;
	this->z = this->z * this->z;

	// return the square root of the squared answer
	return sqrtf(this->x + this->y + this->z);
}

float Vector::distanceSquaredBetweenTwoPoints(Vector & p0, Vector & p1)
{
	// Find the length of the vector by subtracting each of the x, y and z positions 
	this->x = (p1.x - p0.x);
	this->y = (p1.y - p0.y);
	this->z = (p1.z - p0.z);

	// Square the results
	this->x = this->x * this->x;
	this->y = this->y * this->y;
	this->z = this->z * this->z;

	// return the distance squared result
	return (this->x + this->y + this->z);
}