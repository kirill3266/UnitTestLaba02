#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "C:\Users\kakir\source\repos\FuckingUnit\FuckingUnit\Header.h"
#include "pch.h"

extern int string(char* str1, int d);

int main() {
	printf("Vvedite stroku:");
	 char str1[1000];
	 fgets(str1, 1000, stdin);
	printf("Vvedite dlinu:");
	int d=0;
	scanf("%d",&d);
	if (d == 0) {
		printf("Error!");
		return 0;
	}
	printf("Result: %d", string(str1,d));
}