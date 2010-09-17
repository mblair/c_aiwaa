/* Calculate the day on which any date falls using Zeller's congruence */

#include <stdio.h>
main() {
	int Day, Month, Year, YearInCentury, Century, AdjustedMonth, DayOfWeek;
	char ch;

	printf("Write a day in the form day/month/year\n");
	scanf("%d%c%d%c%d", &Day, &ch, &Month, &ch, &Year);

	do { /* start of loop */
		YearInCentury = Year % 100; Century = Year / 100;

		/* Adjust the month so that March is month 1 and February 12 */
		AdjustedMonth = Month - 2;
		if(AdjustedMonth <= 0) {
			AdjustedMonth += 12;
			--YearInCentury;
		}

		/* Calculate the day of the week with Sunday = 0, Monday = 1 
		   etc. */
		DayOfWeek = ((13 * AdjustedMonth - 1) / 5 + Day + YearInCentury +
		  YearInCentury / 4 + Century / 4 - 2 * Century) % 7;

		/* Print the result */
		printf("\n%d/%d/%d is a ", Day, Month, Year);
		switch(DayOfWeek) {
			case 0: printf("Sunday\n");		break;
			case 1: printf("Monday\n");		break;
			case 2: printf("Tuesday\n");	break;
			case 3: printf("Wednesday\n");	break;
			case 4: printf("Thursday\n");	break;
			case 5: printf("Friday\n");		break;
			case 6: printf("Saturday\n");	break;
		}
		printf("Write another date: (0/0/0 will stop the program)\n");
		scanf("%d%c%d%c%d", &Day, &ch, &Month, &ch, &Year);
	} while (Year > 0); /* end of loop */
}
