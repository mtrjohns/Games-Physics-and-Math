#pragma once

#include "Drag.h"
#include "TractiveForce.h"
#include "Acceleration.h"

class Velocity
{
private:
	float dt = 0.0f; // delta time
	float t = 0.0f; // time
	int i = 0; // counter

public:
	Velocity();
	Velocity(float);
	virtual ~Velocity();

	void setDT(float);
	float getDT(void);
	void setT(float);
	float getT(void);

	void newV(Drag*, TractiveForce*, Acceleration*);
	void print();

};