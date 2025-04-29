#include <stdio.h>
int main ()
{
	int Marks;
	printf ("Enter Marks\t:");
	scanf ("%d", & Marks);
	if (Marks >= 100);
	{
		printf ("Invalid Marks");
	}
	if (Marks >= 90)
	{
		printf ("Excellent");
	}
	else if (Marks >= 80)
	{
		printf ("A");
	}
	else if (Marks >= 70)
	{
		printf ("B");
	}
	else if (Marks >= 60)
	{
		printf ("C");
	}
	else if (Marks >= 50)
	{
		printf ("D");
	}
	else if (Marks >= 40)
	{
		printf ("E");
	}
	else if (Marks < 40 && Marks >= 0);
		{
			printf ("Fail");
		}                             
		return 0;
}
