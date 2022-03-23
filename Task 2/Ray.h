#pragma once
#include "Vector.h"

class Ray
{

private:
	Vector v1;
	Vector p1;

public:
	Ray();
	Ray(Vector&, Vector&);
	~Ray();

	bool lineOfSight(Vector&, Vector&);
	bool objectSelection(Vector&, Vector&);
};