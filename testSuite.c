#include <stdio.h>
#include "cal.h"

/*
This one didn't work and got the explannation from 
http://stackoverflow.com/questions/1489932/how-to-concatenate-twice-with-the-c-preprocessor-and-expand-a-macro-as-in-arg
#define TEST(test_num)   test_##test_num()*;
define RIABLE 3
#define PASTER(x,y) x ## _ ## y
#define EVALUATOR(x,y)  PASTER(x,y)
#define NAME(fun) EVALUATOR(fun, VARIABLE)

extern void NAME(mine)(char *x);
*/


void test_1()
{
    printf("These are the possible month names:\n");
    void print_months();

    printf("These are the possible day names:\n");
    void print_weekdays();
}

void test_2()
{

	DATE currentDate;

	currentDate.year = 2016;
	currentDate.month = JAN;
	currentDate.dom = FRI;

	print_date(currentDate);
}



void test_3()
{
    int i;
	DATE currentDate;
    printf("%s\n", "Test: chage the day of the month =============================");
    for (i = 0; i <= 32; i++)
    {
	currentDate.dom = i;
	print_date(currentDate);
    }
}

void test_4()
{
    int i;
	DATE currentDate;
    printf("%s\n", "Now testing Months ===================");
    for (i = 0; i <= 13; i++)
    {
	currentDate.month = i;
	print_date(currentDate);
    }
}

void test_5()
{
    int i;
	DATE currentDate;
    printf("%s\n", "Now testing year ===================");
    for (i = 2015; i < 2017; i++)
    {
	currentDate.year = i;
	print_date(currentDate);
    }

}

void select_tests(){
}

int run_tests()
{
        int nextTest=0;
	printf("=*=*=*=*=*=*=*Starting calendar testsuite=*=*=*=*=*=*\n");

        test_1(); nextTest++;
        test_2(); nextTest++;
        test_3(); nextTest++;
        test_4(); nextTest++;
        test_5(); nextTest++;

        /* Return the number of tests ran */
	return nextTest;
}

/*known issues/limitation:
No date validity check
No month length check
No leap year check
No checks at all 
*/
