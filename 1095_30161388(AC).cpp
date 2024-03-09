//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <cmath>
using namespace std;

int main() {

	int n,cpr;
	cin >> n;
	int num[10000] = {};

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	cpr = num[0];

	for (int i = 0; i < n; i++) {
		if (cpr > num[i])cpr = num[i];
	}
	cout << cpr;

	return 0;

}
