#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
#include <stdio.h>
///using namespace std;

int main() {
	int y, m, d;

	scanf("%d.%d.%d", &y,&m,&d);
	if (y < 1000&&y>=100) {
		printf("0");
		printf("%d.", y);
	}
	else if (y < 100&&y>=10) {
		printf("00");
		printf("%d.", y);
	}
	else if (y < 10&&y>=1) {
		printf("000");
		printf("%d.", y);
	}
	else printf("%d.", y);

	if (m / 10 == 0) {
		//printf("%d.",y);
		printf("0");
		printf("%d.", m);
		if (d / 10 == 0) {
			printf("0");
			printf("%d", d);
		}
		else{
			printf("%d", d);
		}
		return 0;
	}
	else if (d/10==0) {
		//printf("%d.", y);
		printf("%d.", m);
		printf("0");
		printf("%d", d);
		return 0;
	}
	else if (m / 10 == 1 && d / 10 >= 1) {
		//printf("%d.", y);
		printf("%d.", m);
		printf("%d", d);
		return 0;
	}
	return 0;

}
