#pragma once
class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2, ID = 0; // default values
	}
	fruit(float p, int n, float d) {
		price = p;
		many = n;
		ID = d;
	}
	// member data
	int many;
	float price, ID;
	// member function
	float show();
};
