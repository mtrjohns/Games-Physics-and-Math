#include "TractiveForce.h"
#include <iostream>
using namespace std;

TractiveForce::TractiveForce()
{

}

TractiveForce::TractiveForce(float x)
{
	setX(x);
}

TractiveForce::~TractiveForce()
{

}

void TractiveForce::setX(float x)
{
	this->x = x;
}

float TractiveForce::getX(void)
{
	return this->x;
}

void TractiveForce::setFt(float Ft)
{

	this->Ft = Ft;
}

float TractiveForce::getFt(void)
{
	return this->Ft;
}

void TractiveForce::tractiveForce()
{
	// If dragster distance greater than 8.0 metres, set Tractive Force to zero
	if (getX() > 8.0f)
	{
		Ft = 0.0f;
	}
	// Else calculate remaining Tractive Force
	else
	{
		Ft = 1.5f * ( 12.0f - getX() );
	}
}

void TractiveForce::print()
{
	cout << "Ft = " << getFt() << endl;
}