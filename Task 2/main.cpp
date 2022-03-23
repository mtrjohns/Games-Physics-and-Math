#include "Vector.h"
#include "Ray.h"
#include "Plane.h"
#include "SphereToSphere.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	// Create Vectors
	Vector v1(1.3f, -2.0f, 4.1f);
	Vector v2(9.32f, -7.32f, 3.33f);
	Vector v3(1.3f, -2.0f, 4.1f);
	Vector v4(9.32f, -7.32f, 3.33f);
	Vector s0(1.3f, -2.0f, 4.1f);
	Vector s1(9.32f, -7.32f, 3.33f);

	// Create Ray
	Ray r1(v1, v2);

	// Create Plane
	Plane plane1(v1, v2, v3, v4);
	Plane plane2(v1, v2, v3);

	// Pass two spheres ( Point0, Point1, Radius0, Radius1 )
	SphereToSphere *sphere1 = new SphereToSphere(s0, s1, 14, 11);
	
	// Create Variables to hold results
	float dist = 0.0f;
	float dists = 0.0f;
	bool ray1 = false;
	bool ray2 = false;
	bool collision = false;

		// Call and use methods of Ray
		ray1 = r1.lineOfSight(v2, v1);
		ray2 = r1.objectSelection(v3, v4);

		// Call and use methods of SphereToSphere
		collision = sphere1->sphereCollision(s0, s1, 14, 11);

		// Call and use methods of Vector
		dist = v1.distanceBetweenTwoPoints(v1, v2);
		dists = v1.distanceSquaredBetweenTwoPoints(v3, v4);

		cout << "Distance between 2 points = " << dist << endl;
		cout << "Distance squared between 2 points = " << dists << endl;
}