#include "Acceleration.h"
#include "Drag.h"
#include "TractiveForce.h"

Acceleration::Acceleration()
{

}

Acceleration::~Acceleration()
{

}

void Acceleration::setA(float a)
{
	this->a = a;
}

float Acceleration::getA(void)
{
	return this->a;
}

void Acceleration::acceleration(Drag* drag, TractiveForce* trac)
{
	// Set Acceleration ( Tractive force - Drag Force ) / Mass
	setA( (trac->getFt() - drag->getFd()) / drag->getM() );
}