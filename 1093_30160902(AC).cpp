//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <cmath>
using namespace std;

int main() {

	int n;
	cin >> n;
	int ar[10000] = {};
	int num[23] = {};

	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		num[ar[i]-1]++;
	}

	for (int i = 0; i < 23; i++) {
		cout << num[i]<<" ";
	}

	return 0;

}
