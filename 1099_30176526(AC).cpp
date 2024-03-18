//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <cmath>
using namespace std;

int main() {

	int arr[10][10] = {};
	int i = 1, j = 1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[i][j];
		}
	}

	for(int k=0;k<10;k++) {
		for (j;; j++) {
			if (arr[i][j] == 0)arr[i][j] = 9;
			else if (arr[i][j] == 1) {
				j--;
				i++;
				break;
			}
			else if (arr[i][j] == 2)break;
		}
		if (arr[i][j] == 2) {
			arr[i][j] = 9;
			break;
		}
		for (i;; i++) {
			if (arr[i][j] == 0)arr[i][j] = 9;
			else if (arr[i][j] == 1) {
				i--;
				j++;
				break;
			}
			else if (arr[i][j] == 2)break;
			if (arr[i][j + 1] == 0) {
				j++;
				break;
			}
		}
		if (arr[i][j] == 2) {
			arr[i][j] = 9;
			break;
		}
	}

	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			cout << arr[a][b] << " ";
		}
		cout << endl;
	}

	return 0;

}
