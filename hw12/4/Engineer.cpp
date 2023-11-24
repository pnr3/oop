#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) {
	return xx->price; // access protected or private
}
int Engineer::getCarWheels(Car* xx) {
	return xx->getWheels();
}
int Engineer::getCarwheels(Car* xx) {
	return xx->wheels;
}
float Engineer::getCarSpeed(Car* xx) {
	return xx->speed;
}
void Engineer::getCarName(Car* xx) {
	return xx->getName();
}
float Engineer::getCarspeed(Car* xx) {
	return xx->getSpeed();
}