#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int ar[5];
	scanf("%1d%1d%1d%1d%1d",&ar[0],&ar[1],&ar[2], &ar[3], &ar[4]);
	
	printf("[%d]\n", ar[0]*10000);
	printf("[%d]\n", ar[1]*1000);
	printf("[%d]\n", ar[2]*100);
	printf("[%d]\n", ar[3]*10);
	printf("[%d]\n", ar[4]);

	
	return 0;

}

