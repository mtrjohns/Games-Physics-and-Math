#include "Plane.h"
#include "Vector.h"
#include <iostream>
using namespace std;

Plane::Plane()
{

}

// overloaded used for pointonplane
Plane::Plane(Vector & v1, Vector & p0, Vector & p1)
{
	this->v1 = v1;
	this->p0 = p0;
	this->p1 = p1;
}

// overloaded used for coplaner
Plane::Plane(Vector & p0, Vector & p1, Vector & p2, Vector & p3)
{
	this->p0 = p0;
	this->p1 = p1;
	this->p2 = p2;
	this->v1 = p3;
}

Plane::~Plane()
{

}

float Plane::coplanar(Vector & p0, Vector & p1, Vector & p2, Vector & p3)
{
	cout << "Plane: coplanar Function called correctly." << endl;
	return 0.0f;
}

bool Plane::isPointOnPlane(Vector & v1, Vector & p0, Vector & p1)
{
	cout << "Plane: Is point on a plane Function called correctly." << endl;
	return true;
}