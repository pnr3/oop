#include <iostream>
#include "health.h"
using namespace std;
int main() {
	CHealth VIP(65), VIP2(80), * mario, * mickey; // need for CHealth() to be public 
	mario = new CHealth(70);

	// vip2와 *mickey를 만들기
	mickey = new CHealth(40);
	
	cout << "  " << VIP.age << "  " << mario->age << endl;
	cout << "  VIP2's age is " << VIP2.age << ",  mickey's age is " << mickey->age << endl<<endl;
	cout << "  --" << endl<<endl;

	VIP.measureCel();
	mario->measureCel();
	mickey->measureCel();
	VIP2.faren = 90;
	VIP2.faren2cel();

	cout << "  " << VIP.cel << "C  " << mario->faren << "F \n";
	cout << "  VIP2's cel is " << VIP2.cel << "C , VIP2's faren is " << VIP2.faren << "F \n";
	cout << "  mickey's cel is " << mickey->cel << "C, mickey's faren is " << mickey->faren << "F \n \n";
	cout << "  --" << endl;

	cout << "  size " << sizeof(CHealth) << "\n";
	return 1;
}