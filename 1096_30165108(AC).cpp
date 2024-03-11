//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <cmath>
using namespace std;

int main() {

	int n, x, y;
	cin >> n;
	int ar[19][19] = {};

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		ar[x-1][y-1]=1;
	}

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
