//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {

	int a;
	cin >> a;
	
	if (a >0) { 
		cout << "plus" << endl; 
	if (a % 2 == 0)cout << "even";

	else cout << "odd";

	}
	
	if (a < 0) {
		cout << "minus" << endl;
		if (a % 2 == 0)cout << "even";

		else cout << "odd";

	}
	

	
	
	return 0;

}
