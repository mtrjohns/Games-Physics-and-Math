#include "Ray.h"
#include "Vector.h"
#include <iostream>
using namespace std;

Ray::Ray()
{

}

Ray::Ray(Vector &, Vector &)
{

}


Ray::~Ray()
{

}

bool Ray::lineOfSight(Vector &v1, Vector &p1)
{
	// Work out if camera sees an object 
	cout << "Ray: Line of Sight Function called correctly." << endl;
	return true;
}

bool Ray::objectSelection(Vector &v1, Vector &p1)
{
	// Work out if ray line collides with any object and return the point at which it hits
	cout << "Ray: Object Selection Function called correctly." << endl;
	return true;
}