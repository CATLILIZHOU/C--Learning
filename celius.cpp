#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>    

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f) //采用这种形式很重要否则直接向下取整为0
int main(void)       
{
	float fahrenheit, celsius;
	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
	printf("Celsius temperature: %.1f\n", celsius);
	return 0;
}


