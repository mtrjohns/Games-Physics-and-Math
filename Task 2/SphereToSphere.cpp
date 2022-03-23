#include "SphereToSphere.h"
#include <iostream>
using namespace std;

SphereToSphere::SphereToSphere()
{

}

SphereToSphere::SphereToSphere(Vector & p0, Vector & p1, float r1, float r2)
{
	this->point0 = p0;
	this->point1 = p1;
	this->radius1 = r1;
	this->radius2 = r2;
}


SphereToSphere::~SphereToSphere()
{

}

bool SphereToSphere::sphereCollision(Vector & p0, Vector & p1, float r1, float r2)
{
	float centerToCenterPoint = 0.0f;
	float addedRadius = 0.0f;
	bool result = false;

	// Find length between center point of 2 spheres (using vector class method)
	centerToCenterPoint = distanceSquaredBetweenTwoPoints(p0, p1);
	// Add both sphere radius together
	addedRadius = (radius1 * radius1) + (radius2 * radius2);
	cout << "Radius = " << addedRadius << endl;
	/* if radius + radius of both spheres is greated than length
	between center points sphere collision detected*/
	if (addedRadius >= centerToCenterPoint)
	{
		cout << "Sphere Collision detected" << endl;
		result = true;
	}
	// else no collision detected
	else
	{
		{
			cout << "No sphere Collision detected" << endl;
			result = true;
		}
	}

	// return result of if statement
	return result;
}
