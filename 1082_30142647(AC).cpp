﻿
//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {	

	int a;
	cin >> hex >> a;

	for (int i = 1; i <= 0XF; i++) {
		cout << hex <<uppercase<< a << "*" << i << "=" <<(a*i) << endl;
	}

	
	return 0;

}
