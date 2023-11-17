#pragma once
#include <fstream>
using namespace std;
class LoL {
public:
	LoL() {};
	LoL(int n1, int n2, float A, float B, float X0, float DX, int M) {
		N1 = n1; N2 = n2; a = A; b = B; x0 = X0; dx = DX; m = M;
	};
	int N1, N2, m;
	float a, b, x0, dx;
	ofstream dd;
	void f0(string); void f1(); void f2();

	~LoL();
};