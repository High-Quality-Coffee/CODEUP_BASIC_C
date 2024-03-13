//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <cmath>
using namespace std;

int main() {

	int n, x, y;

	int ar[19][19] = {};

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cin >> ar[i][j];
		}
	}
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		
		for (int a = 0; a < 19; a++) {
			if(ar[x-1][a]==0)ar[x-1][a] = 1;
			else if (ar[x - 1][a] == 1)ar[x - 1][a] = 0;
		}

		for (int b = 0; b < 19; b++) {
			if (ar[b][y-1] == 0)ar[b][y-1] = 1;
			else if (ar[b][y-1] == 1)ar[b][y-1] = 0;
		}

	}

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cout<< ar[i][j]<<" ";
		}
		cout << endl;
	}

	return 0;

}
