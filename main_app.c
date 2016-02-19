#include <stdio.h>
#include <time.h>
#include "cal.h"

extern int run_tests();
int main(int argc, char const *argv[])
{
	time_t time_of_test = time(NULL);
        
        printf("\nTime of the test:%s\n\n", ctime(&time_of_test));

        run_tests();

	return 0;
}

