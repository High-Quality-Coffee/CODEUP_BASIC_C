//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {

	int a;
	cin >> a;

	switch (a) {

	case 12: 
	case 1:
	case 2:cout << "winter"; break;
	case 3:
	case 4:
	case 5:cout << "spring"; break;
	case 6:
	case 7:
	case 8:cout << "summer"; break;
	default: cout << "fall"; break;

	}
	return 0;

}
