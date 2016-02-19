#include <stdio.h>
#include "cal.h"

extern int run_tests();
int main(int argc, char const *argv[])
{
	DATE currentDate;

	printf("Starting calendar test\n");

	currentDate.year = 2016;
	currentDate.month = JAN;
	currentDate.dom = FRI;

	print_date(currentDate);

        run_tests();

	return 0;
}

