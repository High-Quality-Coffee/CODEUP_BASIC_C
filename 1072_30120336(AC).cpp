//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {

	int n,m;

	cin >> n;
reget:
	cin >> m;
	cout << m << endl;
	n--;
	if (n!= 0)goto reget;

	return 0;

}
