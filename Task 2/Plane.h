#pragma once
#include "Vector.h"

class Plane
{
private:
	Vector v1;
	Vector p0;
	Vector p1;
	Vector p2;

public:
	Plane();
	Plane(Vector&, Vector&, Vector&);
	Plane(Vector&, Vector&, Vector&, Vector&);
	~Plane();

	float coplanar(Vector&, Vector&, Vector&, Vector&);
	bool isPointOnPlane(Vector&, Vector&, Vector&);
};

