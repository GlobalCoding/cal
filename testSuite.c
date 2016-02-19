#include <stdio.h>
#include <malloc.h>
#include "cal.h"

/* Create a function pointer type. This will make it easier to create an array of function pointers. */
typedef void (*Function_Pointer)(void);

/* Create an array of function pointers for storing the function names that will be called to run the tests.
This will help make sure that we can use the same code to run multiple tests selecting in the order that we want without much modification 
*/
typedef struct _TEST_CASE_
{
    unsigned int test_num;
    Function_Pointer test_case;
} Test_Case;

Test_Case *test_cases;

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
    printf("\nThese are the possible month names:\n");
    print_months();

    printf("\nThese are the possible day names:\n");
    print_weekdays();
}

void test_2()
{

	DATE currentDate;

	currentDate.year = 2016;
	currentDate.month = JAN;
	currentDate.dom = FRI;
        printf("\n");
	print_date(currentDate);
}



void test_3()
{
    int i;
    DATE currentDate;
    printf("\n%s\n", "Test: date for all days of the month  =============================");
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

int select_tests(){

    int num_of_tests=5;
    int selected_num_of_tests=num_of_tests;
    test_cases = malloc(sizeof(Function_Pointer) * num_of_tests);

    test_cases[0].test_num = 1;
    test_cases[0].test_case = &test_1;

    test_cases[1].test_num = 2;
    test_cases[1].test_case = &test_2;

    test_cases[2].test_num = 3;
    test_cases[2].test_case = &test_3;

    test_cases[3].test_num = 4;
    test_cases[3].test_case = &test_4;

    test_cases[4].test_num = 5;
    test_cases[4].test_case = &test_5;

    /* Add tests to run to the function pointer list. */
    //selected_num_of_tests=sizeof(test_cases)/sizeof(test_cases[0]);

    return selected_num_of_tests;

}

void finish_selected_test()
{
    free(test_cases);
}

int run_tests()
{
    int nextTest=0;
    int testCount = select_tests();

    printf("=*=*=*=*=*=*=*Starting calendar testsuite=*=*=*=*=*=*\n");
    for (nextTest = 0;  nextTest < testCount; nextTest++)
    {
        printf("***************************** %d)_ ", test_cases[nextTest].test_num);
        (*test_cases[nextTest].test_case)();
        printf("\n");
    }

    finish_selected_test();

    /* Return the number of tests ran successfully (currently all) */
	return nextTest;
}

/*known issues/limitation:
No date validity check
No month length check
No leap year check
No checks at all 
*/
