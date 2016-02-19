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
	
} MONTHS;

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
	MONTHS month;
	unsigned int day_of_month;
	unsigned int year;	/* year must be in 4 digit format */
} DATE;

void what_is_the_month(DATE currentDate);

#endif
