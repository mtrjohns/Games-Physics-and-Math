#include "Drag.h"
#include "Acceleration.h"
#include "TractiveForce.h"
#include <iostream>
using namespace std;

Drag::Drag()
{

}

Drag::Drag(float CR, float m, float g, float CD, float p, float a, float v)
{
	setCR(CR);
	setM(m);
	setG(g);
	setCD(CD);
	setP(p);
	setA(a);
	setV(v);
}

Drag::~Drag()
{

}

void Drag::setCR(float CR)
{
	this->CR = CR;
}

float Drag::getCR(void)
{
	return this->CR;
}

void Drag::setM(float m)
{
	this->m = m;
}

float Drag::getM(void)
{
	return this->m;
}

void Drag::setG(float g)
{
	this->g = g;
}

float Drag::getG(void)
{
	return this->g;
}

void Drag::setCD(float CD)
{
	this->CD = CD;
}

float Drag::getCD(void)
{
	return this->CD;
}

void Drag::setP(float p)
{
	this->p = p;
}

float Drag::getP(void)
{
	return this->p;
}

void Drag::setA(float a)
{
	this->a = a;
}

float Drag::getA(void)
{
	return this->a;
}

void Drag::setV(float v)
{
	this->v = v;
}

float Drag::getV(void)
{
	return	this->v;
}

void Drag::setFd(float Fd)
{
	this->Fd = Fd;
}

float Drag::getFd(void)
{
	return Fd;
}

// Calculate Drag Force
void Drag::dragForce()
{
	// else calculate drag from inputted values
		setFd( (getCR() * getM() * getG() ) + 0.5f * (getCD() * getP() * getA() * (getV() * getV()) ) );
}

void Drag::print()
{
	cout << "CR = " << getCR() << endl;
	cout << "m = " << getM() << endl;
	cout << "g = " << getG() << endl;
	cout << "CD = " << getCD() << endl;
	cout << "p = " << getP() << endl;
	cout << "A = " << getA() << endl;
	cout << "V = " << getV() << endl;
	cout << "Fd = " << getFd() << endl;
	cout << "new Velocity = " << getV() << endl;
}