#ifndef VECTOR_H
#define VECTOR_H

class Vector
{

private:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;

public:
	//construct
	Vector(float x, float y, float z);
	Vector(void);
	void Scale(float s);
	void Add(Vector & v1);
	void Add(Vector & v1, Vector & v2);
	Vector getVector(void);
	float distanceBetweenTwoPoints(Vector & p0, Vector & p1);
	float distanceSquaredBetweenTwoPoints(Vector & p0, Vector & p1);
};
#endif