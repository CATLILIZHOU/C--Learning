#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
int main(void)
{
	float x;
	printf("Enter a number:");
	scanf("%f", &x);
	printf("%f", (int)pow(x, 5) * 3 + (int)pow(x, 4) * 2 -
		(int)pow(x, 3) * 5 - (int)pow(x, 2) * 1 - x * 5 -6);
	return 0;

}

