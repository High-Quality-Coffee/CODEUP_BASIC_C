//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <cmath>
using namespace std;

int main() {

	int h, w, n, l, d, x, y;
	cin >> h >> w;
	cin >> n;
	int arr[100][100] = {};

	for (int i = 0; i<n; i++) {
		cin >> l >> d >> x >> y;

		if (d == 0) {
			for (int j = 0; j < l; j++)arr[x - 1][y - 1 + j] = 1;
		}
		else if (d == 1) {
			for (int k = 0; k < l; k++)arr[x - 1 + k][y - 1] = 1;
		}

	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	

	return 0;

}
