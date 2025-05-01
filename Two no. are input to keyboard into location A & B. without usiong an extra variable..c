#include <stdio.h>
int main ()
{
	int A, B;
	printf ("Enter A");
	scanf ("%d", & A);
	printf ("Enter B");
	scanf ("%d", & B);
	printf ("Initial value of A is %d", A);
	printf ("Initial value of B is %d", B);
	
	A = A + B;
	B = B - B;
    A = A - B;
	
	return 0;
}
