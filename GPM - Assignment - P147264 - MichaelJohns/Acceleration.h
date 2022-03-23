#pragma once

#include "Drag.h"
#include "TractiveForce.h"

class Acceleration
{
private:
	float a = 0.0f;
	Drag* drg;
	TractiveForce* trac;

public:
	Acceleration();
	virtual ~Acceleration();

	void setA(float);
	float getA(void);

	void acceleration(Drag*, TractiveForce*);
};