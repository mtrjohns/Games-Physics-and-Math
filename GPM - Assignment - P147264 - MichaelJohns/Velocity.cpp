#include "Velocity.h"
#include "Drag.h"
#include "TractiveForce.h"
#include "Acceleration.h"
#include <iostream>
using namespace std;

Velocity::Velocity()
{

}

// Overloaded construtor to change dt
Velocity::Velocity(float dt)
{
	setDT(dt);
}

Velocity::~Velocity()
{

}

void Velocity::setDT(float dt)
{
	this->dt = dt;
}

float Velocity::getDT(void)
{
	return this->dt;
}

void Velocity::setT(float t)
{
	this->t = t;
}

float Velocity::getT(void)
{
	return this->t;
}

void Velocity::newV(Drag* d, TractiveForce* tr, Acceleration* a)
{
	FILE* eulerFile;
	fopen_s(&eulerFile, "Model Dragster Euler.csv", "w");

	fprintf(eulerFile, "%s", "Sep=,\nFt,Fd,a,x,dt,v,t,Step\n");

	while (i < 150)
	{
		cout << "Ft = " << tr->getFt()
			<< " \tFd = " << d->getFd()
			<< " \tA = " << a->getA()
			<< " \tx = " << tr->getX()
			<< " \tdt = " << getDT()
			<< " \t V = " << d->getV()
			<< " \t T = " << getT()
			<< " \t Step = " << i
			<< endl;

		d->dragForce(); // Calculate Drag Force
		tr->tractiveForce(); // Calculate Tractive Force
		a->acceleration(d, tr); // Calculate Acceleration

		d->setV(d->getV() + (getDT() * a->getA())); // Calculate new velocity
		tr->setX(tr->getX() + getDT() * d->getV()); // Calculate distance
		if (d->getV() < 0.0f)
		{
			d->setFd(0.0f);
			d->setV(0.0f);
			a->setA(0.0f);
		}
		else
		{
			// blank else statement
		}


		fprintf(eulerFile, "%f,%f,%f,%f,%f,%f,%f,%d\n", tr->getFt(), d->getFd(), a->getA(), tr->getX(), getDT(), d->getV(), getT(), i);
		setT(getT() + getDT()); // Calculate new time
		i++; // increment counter ( used only for printed current step )
	}
}

void Velocity::print()
{

}