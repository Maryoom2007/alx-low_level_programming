#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there  */


/**
 * main - entry point 
 *
*/
int main(void)
{
	int n;
	int Lastdigitof;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastdigitof = n%10;
	if (Lastdigitof > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Lastdigitof);
	}
	else if (Lastdigitof == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Lastdigitof);
	}
	else if (Lastdigitof < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastdigitof);
	}
	else if (Lastdigitof != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastdigitof);
	}
	return (0);
}
