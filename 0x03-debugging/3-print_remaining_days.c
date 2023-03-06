#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    int total_days = 0;
    int leap = 0;

    /* Check if it's a leap year */
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        leap = 1;
    }

    /* Calculate the total number of days in the year */
    switch (month - 1)
    {
        case 11:
            total_days += 30; /* Add days in November */
        case 10:
            total_days += 31; /* Add days in October */
        case 9:
            total_days += 30; /* Add days in September */
        case 8:
            total_days += 31; /* Add days in August */
        case 7:
            total_days += 31; /* Add days in July */
        case 6:
            total_days += 30; /* Add days in June */
        case 5:
            total_days += 31; /* Add days in May */
        case 4:
            total_days += 30; /* Add days in April */
        case 3:
            total_days += 31; /* Add days in March */
        case 2:
            if (leap)
            {
                total_days += 29; /* Add days in February in leap years */
            }
            else
            {
                total_days += 28; /* Add days in February in non-leap years */
            }
        case 1:
            total_days += 31; /* Add days in January */
    }

    /* Add the current day of the month to the total number of days */
    total_days += day;

    /* If it's a leap year and we haven't reached March yet, subtract one from the total number of days */
    if (leap && month <= 2)
    {
        total_days--;
    }

    /* Print the results */
    if (leap && month >= 3)
    {
        printf("Day of the year: %d\n", total_days);
        printf("Remaining days: %d\n", 366 - total_days);
    }
    else
    {
        printf("Day of the year: %d\n", total_days);
        printf("Remaining days: %d\n", 365 - total_days);
    }
}
