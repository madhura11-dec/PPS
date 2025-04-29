#include <stdio.h>
int main ()
{
	int A, B;
	printf ("Enter Num1:\t");
	scanf ("%d", & A);
	printf ("Enter Num2:\t");
	scanf ("%d", & B);
	if (A > B)
	{
		printf ("Num1 is greater than Num2");
	}
	else if (A < B)
	{
		printf ("Num2 is greater than Num1");
	}
	else
	{
		printf ("Num1 is equal to num2:");
	}
	return 0;
}

