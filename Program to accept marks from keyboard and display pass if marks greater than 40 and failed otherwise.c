#include <stdio.h>
int main ()
{
	int Marks ;
	printf ("Enter Marks:\t");
	scanf ("%d", & Marks);
	if (Marks > 40)
	{
		printf ("PASS");
	}
	else
	{
		printf ("FAIL");
	}
	return 0;
}
