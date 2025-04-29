#include <stdio.h>
int main()
{
	int Num1, Num2, Num3, Avg;
	printf ("Enter first number:");
	scanf ("%d", & Num1);
	printf ("Enter second number:");
	scanf ("%d", & Num2);
	printf ("Enter third number:");
	scanf ("%d", & Num3);
	Avg = (Num1 + Num2 + Num3) / 3;
	printf ("Avg of %d and %d is %d",Num1, Num2, Num3, Avg);
	return 0;
}
