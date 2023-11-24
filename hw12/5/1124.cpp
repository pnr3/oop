#include <iostream>
using namespace std;
#include "Car.h"
#include "SUV3.h"
#include "Engineer.h"
int main(int argc, char*argv[]) {
	Car* newSUV = new SUV(); 
	cout << " with virtual \n";
	newSUV->klaxon(3);

	cout << "\n with virtual \n";
	newSUV->sayMyName();

	delete newSUV;
	return 0;
}
