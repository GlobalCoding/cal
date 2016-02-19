#ifndef _CAL_H
#define _CAL_H

typedef enum{
	JAN=1,
	FEB,
	MAR,
	APR,
	MAY,
	JUN,
	JUL,
	AUG,
	SEP,
	OCT,
	NOV,
	DEC
	
} MONTH;

typedef enum{
	MON=1,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
	SUN
} WEEKDAY;

typedef struct{
	MONTH month;
	unsigned int dom;   /* day of the month */
	unsigned int year;	/* year must be in 4 digit format */
} DATE;

char* get_month_name(MONTH month);
char* get_day_name(WEEKDAY day);
void print_months();
void print_weekdays();
void print_date(DATE date);
WEEKDAY calc_day_of_week(DATE date);

#define STARTING_DAY FRI
#define WEEK_LENGTH (7) 
#endif
