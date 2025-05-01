#include <stdio.h>
int main ()
{
	int BS, DA, HRS, GS;
	printf ("Enter the Basic salary");
	scanf ("%d", & BS);
	printf ("Enter the Dearness");
	scanf ("%d", & DA);
	printf ("Enter the House Rent Salary");
	scanf ("%d", & HRS);
	
	DA = 40 * BS;
	HRS = 20 * BS;
	
	GS = (BS + DA + HRS);
	return 0;
}
