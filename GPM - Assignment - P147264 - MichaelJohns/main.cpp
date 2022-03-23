#include "Drag.h"
#include "TractiveForce.h"
#include "Acceleration.h"
#include "Velocity.h"

int main(int argc, char* argv[])
{
	/* Set drag values ( Coefficient of Rolling Resistance, Mass, Gravity, Drag Coefficient, 
						 Air Density, Frontal Area of Vehicle, Starting Velocity ) */
	Drag *d = new Drag(0.21f, 1.0f, 9.81f, 0.34f, 1.2f, 0.01f, 0.0f);

	// set start position of dragster ( start position )
	TractiveForce *tr = new TractiveForce(0.0f);

	// Create acceleration object
	Acceleration *a = new Acceleration();

	// use overloaded constructor to set ( dt, distance ) this will tell the timestep and distance to keep running euler
	Velocity *v = new Velocity(0.06f);

	// Run Euler
	v->newV(d, tr, a); 

	delete d;
	delete tr;
	delete a;
	delete v;

	return 0;
}