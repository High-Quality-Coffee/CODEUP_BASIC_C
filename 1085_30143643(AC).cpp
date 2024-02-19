//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {	

	double h, b, c, s;
	double byte, kb, mb;

	cin >> h >> b >> c >> s;


	byte = (h * b*c*s) /  8;
	kb = byte / 1024;
	mb = kb /1024;

	cout.precision(1);
	cout << fixed;
	cout << mb<<" MB";

	return 0;

}
