#include <stdio.h>
#include "cal.h"

int main(int argc, char const *argv[])
{
	DATE currentDate;
	int i;

	printf("Starting calendar test\n");

	currentDate.year = 2016;
	currentDate.day_of_month = 18;

	for (i = 0; i <= 13; i++)
	{
		currentDate.month = i;
		what_is_the_month(currentDate);
	}

	for (i = 0; i <= 31; i++)
	{
		currentDate.day_of_month = i;
		what_is_the_month(currentDate);
	}

	for (i = 1900; i < 2100; i++)
	{
		currentDate.year = i;
		what_is_the_month(currentDate);
	}

	return 0;
}
