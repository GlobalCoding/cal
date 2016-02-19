#include <stdio.h>
#include "cal.h"

void what_is_the_month(DATE currentDate)
{
	int i;
	const char* month_names[] = {"", "January", "February", "March", 
	"April", "May", "June", "July", "August",
	"September", "October", "November", "December"};

	for (i = JAN; i <= DEC; i++)
	{
		printf("%s ", month_names[i]);
	}
}

void what_is_the_day(DATE currentDay)
{
	const char* week_day[] = {"", "Monday", "Tuesday", "Wednesday", 
	"Thursday", "Friday", "Saturday", "Sunday"};
	int i=MON;

	do{
		printf("%s ", week_day[i]);
		i++;
	}while(i <= SUN);
}

void tell_me_date(DATE date)
{
	printf("The date is: \t");
	what_is_the_day(date);
	what_is_the_month(date);
	printf("%d\n", date.year);
}

