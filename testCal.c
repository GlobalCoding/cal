#include <stdio.h>
#include "cal.h"

int main(int argc, char const *argv[])
{
	DATE currentDate;
	int i;
	printf("Bismillah: Starting calendar test\n");

#if 0
	currentDate.month = 2;
	currentDate.day_of_month = 18;
	currentDate.year = 2016;

	what_is_the_month(currentDate);

	currentDate.day_of_month = 2;
	what_is_the_month(currentDate);

	currentDate.year = 2015;
	what_is_the_month(currentDate);
#endif

	currentDate.year = 2016;
	currentDate.day_of_month = 18;

/*	i++ is shortcut for i= i+1;
	i+=2 is shortcut for i = i+2;
	*/

	for (i = 0; i <= 13; i++)
	{
		currentDate.month = i;
		what_is_the_month(currentDate);
	}

	return 0;
}
