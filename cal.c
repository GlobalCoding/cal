#include <stdio.h>
#include "cal.h"

void what_is_the_month(DATE currentDate){
	
//	printf("%s\n", "I won't tell you untill you give me a chocolate");

	/* Find the name of the month in string format and print it. */
	switch(currentDate.month){
		case JAN:
			printf("%s\n", "January");
		break;
		case FEB:
			printf("%s\n", "February");
		break;
		case MAR:
			printf("%s\n", "March");
		break;
		case APR:
			printf("%s\n", "April");
		break;
		case MAY:
			printf("%s\n", "May");
		break;
		case JUN:
			printf("%s\n", "June");
		break;
		case JUL:
			printf("%s\n", "July");
		break;
		case AUG:
			printf("%s\n", "August");
		break;
		case SEP:
			printf("%s\n", "September");
		break;
		case OCT:
			printf("%s\n", "October");
		break;
		case NOV:
			printf("%s\n", "November");
		break;
		case DEC:
			printf("%s\n", "December");
		break;
		default:
			printf("%s\n", "Incorrect date. Month can't be greater than 12 or less than 1");
	}
}
