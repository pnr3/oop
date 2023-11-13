#include <iostream>
#include "fruit.h"
#include "store.h"
using namespace std;
int main() {
	fruit apple, pear, peach;
	store A[5], * B;
	cout << " sizeof(A) = " << sizeof(A) << endl;
	for (int i = 0; i < 5; i++) {
		A[i] = store(1000 + 100 * i, 500, 600, i + 2, 3, 4, 1, 2, 3);
	}
	cout << A[2].apple.many << " " << A[2].apple.price << endl;
	cout << (A + 4)->apple.many << " " << (A + 4)->apple.price << endl;
	B = A + 2;
	cout << B[0].apple.many << " " << B[0].apple.price << endl;
	cout << (B + 2)->apple.many << " " << (B + 2)->apple.price << endl;
	cout << " apple.ID = " << A[2].apple.ID << ", pear.ID = " << A[2].pear.ID << ", peach.ID = " << A[4].peach.ID << endl;
	return 123;
}