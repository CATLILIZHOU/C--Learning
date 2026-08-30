#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main(void)
{
	float loan, rate, payment;
	printf("Enter amount of loan:");
	scanf("%f", &loan);
	printf("Enter interest rate:");
	scanf("%f", &rate);
	printf("Enter monthly payment:");
	scanf("%f", &payment);
	float f_payment = loan - payment,
		s_payment = f_payment - payment + rate/1200 * f_payment,
		t_payment = s_payment - payment + rate/1200 * s_payment;
	printf("Balance remaining after first payment: %.2f\n", f_payment);
	printf("Balance remaining after second payment: %.2f\n", s_payment);
	printf("Balance remaining after third payment: %.2f\n", t_payment);
	return 0;
}
