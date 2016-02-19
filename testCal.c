#include <stdio.h>
#include "cal.h"

int main(int argc, char const *argv[])
{
	DATE currentDate;

	printf("Starting calendar test\n");

	currentDate.year = 2016;
	currentDate.month = JAN;
	currentDate.dom = FRI;

	print_date(currentDate);

	return 0;
}

