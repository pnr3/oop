#include <iostream>
using namespace std;
#include "Car.h"
#include "SUV3.h"
#include "Engineer.h"
int main(int argc, char*argv[]) {
	Car* newSUV = new SUV(); 
	newSUV->setPrice(45000);
	newSUV->setWheels(4);

	Engineer engineer;
	std::cout << " public \n";
	std::cout << " The wheels are " << engineer.getCarwheels(newSUV) << "\n";
	std::cout << " \n private \n";
	std::cout << " The wheels are(using function) " << engineer.getCarWheels(newSUV) << std::endl;
	engineer.getCarName(newSUV);
	std::cout << " \n\n protected \n";
	std::cout << " Price is " << engineer.getCarPrice(newSUV) << "dollars\n";
	std::cout << " Speed is " << engineer.getCarSpeed(newSUV) << "\n";
	std::cout << " Spedd is(using function) " << engineer.getCarspeed(newSUV) << "\n";

	delete newSUV;
	return 0;
}
