//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {	

	int w,h,b;
	double byte, kb, mb;

	cin >> w >> h >> b;


	byte = (w* h*b) /  8;
	kb = byte / 1024;
	mb = kb /1024;

	cout.precision(2);
	cout << fixed;
	cout << mb<<" MB";

	return 0;

}
