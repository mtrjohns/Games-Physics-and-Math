#pragma once

class Acceleration;
class TractiveForce;

class Drag
{
private:
	float CR = 0.0f;
	float m = 0.0f;
	float g = 0.0f;
	float CD = 0.0f;
	float p = 0.0f;
	float a = 0.0f;
	float v = 0.0f;
	float Fd = 0.0f;

public:
	Drag();
	Drag(float, float, float, float, float, float, float);
	~Drag();

	void setCR(float);
	float getCR(void);
	void setM(float);
	float getM(void);
	void setG(float);
	float getG(void);
	void setCD(float);
	float getCD(void);
	void setP(float);
	float getP(void);
	void setA(float);
	float getA(void);
	void setV(float);
	float getV(void);
	void setFd(float);
	float getFd(void);
	
	void dragForce();
	void print();
};