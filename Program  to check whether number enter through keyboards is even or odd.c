#include <stdio.h>
int main()
{
	int Number, Rem;
	printf ("Enter Number to check it:");
	scanf ("%d", & Number);
	Rem = Number / 2;
	if (Rem == 0)
	{
		printf ("EVEN");
	}
	else
	{
		printf ("ODD");
	}
	return 0;
}
