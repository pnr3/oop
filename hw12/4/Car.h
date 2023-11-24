#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2) {};
	Car(float, int, float);
	//virtual  
	void klaxon(int);
	void setPrice(float);
	float getPrice();
	void speedChange(float);
	int wheels;
	void setWheels(int);

	friend class Engineer;
protected:
	float price, speed;
	void speedUp(float);
	void speedDown(float);
	float getSpeed();

private:
	int getWheels();
	void getName();
};
