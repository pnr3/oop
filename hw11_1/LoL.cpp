#include "LoL.h"
void LoL::f0(string ss) {
	xx.open(ss, ios::binary | ios::out);
	xx.write((char*)&N1, sizeof(int));
	xx.write((char*)&N2, sizeof(int));
	xx.write((char*)&a, sizeof(float));
	xx.write((char*)&b, sizeof(float));
	xx.write((char*)&x0, sizeof(float));
	xx.write((char*)&dx, sizeof(float));
	xx.write((char*)&m, sizeof(int));
}
void LoL::f1() {
	int* f1d;
	f1d = new int[N2 - N1 + 1];
	for (int i = N1; i <= N2; i++) {
		f1d[i - N1] = i * (i + 1) / 2;
	}
	xx.write((char*)f1d, sizeof(int) * (N2 - N1 + 1));
	delete f1d;
}
void LoL::f2() {
	float* f2d, x;
	x = x0;
	f2d = new float[m];
	for (int i = 0; i < m; i++, x += dx) {
		f2d[i] = a * x + b;
	}
	xx.write((char*)f2d, sizeof(int) * m);
	delete f2d;
	xx.close();
}

void LoL::readf(string ss) {
	int n11, n22, mm;
	float aa, bb, x00, dxx;
	int* readf1;
	readf1 = new int[N2 - N1 + 1];
	float* readf2;
	readf2 = new float[m];
	ifstream yy;
	yy.open(ss, ios::binary | ios::in);
	yy.read((char*)&n11, sizeof(int));
	yy.read((char*)&n22, sizeof(int));
	yy.read((char*)&aa, sizeof(float));
	yy.read((char*)&bb, sizeof(float));
	yy.read((char*)&x00, sizeof(float));
	yy.read((char*)&dxx, sizeof(float));
	yy.read((char*)&mm, sizeof(int));
	yy.read((char*)readf1, sizeof(int) * (N2 - N1 + 1));
	yy.read((char*)readf2, sizeof(int) * m);
	yy.close();
	cout << n11 << " " << n22 << " " << aa << " " << bb << " " << x00 << " " << dxx << " " << mm << endl;
	for (int t = 0; t < N2 - N1 + 1; t++) {
		cout << t << " " << readf1[t] << " " << endl;
	}
	for (int t = 0; t < m; t++) {
		cout << t << " " << readf2[t] << " " << endl;
	}

	cout << sizeof(LoL);
	delete readf1;
	delete readf2;
}
