#include <stdio.h>
#include <stdlib.h>

char leapYear(unsigned short year);
/*
we have to use the next function because func leapYear only works for years 
between 1701 and 3000
*/
unsigned short verification(unsigned short year);

int main()
{
	unsigned short year;
	do
	{
		printf("enter a year\n");
		fflush(stdin);
		scanf("%hu", &year);

		year = verification(year);

		if (year == 0)
		{
			printf("this year is not allowed\nyou have to enter a year between 1701 and 3000\n");
		}
		else
		{
		}
	} while (year == 0);
	

	printf("is %hu a leap year ?:\n%c\n", year, leapYear(year));

	return 0;
}

char leapYear(unsigned short year)
{
	char resultat;

	if ((year % 400) == 0)
	{
		resultat = 'y';
	}
	else
	{
		if (((year % 4) == 0) && (year % 100 != 0))
		{
			resultat = 'y';
		}
		else
		{
			resultat = 'n';
		}
	}

	return resultat;
}

unsigned short verification(unsigned short tmp)
{
	if ((tmp < 1701)||(tmp > 3000))
	{
		tmp = 0;
	}
	else
	{
	}

	return tmp;
}
