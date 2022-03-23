#pragma once

class TractiveForce
{
private:
	float x = 0.0f;
	float Ft = 0.0f;

public:
	TractiveForce();
	TractiveForce(float);
	~TractiveForce();

	void setX(float);
	float getX(void);
	void setFt(float);
	float getFt(void);

	void tractiveForce();
	void print();
};