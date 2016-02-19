#include <stdio.h>
#include "cal.h"
static char* month_names[] = {"", "January", "February", "March", 
"April", "May", "June", "July", "August",
"September", "October", "November", "December"};

static char* week_day[] = {"", "Monday", "Tuesday", "Wednesday", 
"Thursday", "Friday", "Saturday", "Sunday"};

static const unsigned int month_length[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

char* get_month_name(MONTH month)
{
	return month_names[month];
}

char* get_day_name(WEEKDAY day)
{
	return week_day[day];
}

void print_months()
{
	int i;

	for (i = JAN; i <= DEC; i++)
	{
		printf("%s ", month_names[i]);
	}
}

void print_weekdays()
{
	int i=MON;

	do{
		printf("%s ", week_day[i]);
		i++;
	}while(i <= SUN);
}

WEEKDAY calc_day_of_week(DATE date)
{
	unsigned int day, month_days=0;

	MONTH mon;
	/* Add up all the day of the complted month before the specified day of the month */
	for(mon=JAN; mon < date.month; mon++)
	{
		month_days += month_length[mon];
	}
	month_days = month_days + date.dom;
	day = (month_days %WEEK_LENGTH + STARTING_DAY) %WEEK_LENGTH;

	return day;
}

void print_date(DATE date)
{
	printf("The date is: \t");
	printf("%s, ", get_day_name(calc_day_of_week(date)));
        printf("%s ", get_month_name(date.month));
	printf("%d\n", date.year);
}

/*
1	JAN=31,
2	FEB=28,29,30
3	MAR=31
4	APR=30
5	MAY=31
6	JUN=30
7	JUL=31
8	AUG=31
9	SEP=30
10	OCT=31
11	NOV=30
12	DEC=31
*/
