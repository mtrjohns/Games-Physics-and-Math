#pragma once
#include "Vector.h"
class SphereToSphere : public Vector
{
private:
	Vector point0;
	Vector point1;
	float radius1 = 0.0f;
	float radius2 = 0.0f;

public:
	SphereToSphere();
	SphereToSphere(Vector&, Vector&, float, float);
	~SphereToSphere();

	bool sphereCollision(Vector&, Vector&, float, float);
};