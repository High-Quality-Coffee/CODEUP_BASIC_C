//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <cmath>
using namespace std;

int main() {

	int n;
	cin >> n;
	int num[10000] = {};

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int i = n-1; i >=0; i--) {
		cout << num[i]<<" ";
	}

	return 0;

}
