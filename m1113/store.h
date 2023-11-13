#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, float d, float e, float f, float g, float h, float i) {
		apple = fruit(a, d, g);
		pear = fruit(b, c, h);
		peach = fruit(d, f, i);
	}
	fruit apple, pear, peach;
	float total();
};