// Sameh Shahin ew20b001

#include <stdio.h>

//****** Procedures ******//

// check if a year is a leap year or not
int is_leap_year(int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || (n % 4 == 0 && n % 100 == 0 && n % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Return the day name (type string :'D) based on a given number of days after 1/1/1548 .. starting from 1/1/1548 as (1)
const char *get_day_by_number(int d)
{
    char *day = "Saturday";

    switch (d % 7)
    {
    case 1:
        day = "Sunday";
        break;
    case 2:
        day = "Monday";
        break;

    case 3:
        day = "Tuesday";
        break;

    case 4:
        day = "Wednesday";
        break;

    case 5:
        day = "Thursday";
        break;

    case 6:
        day = "Friday";
        break;
    }

    return day;
}

// get the days difference between a given year and the year 1548 (taking into consideration leap years)
int days_year_to_year(int y)
{
    int days_count = 0;

    for (int i = 1584; i < y; i++)
    {
        if (is_leap_year(i) == 1)
        {
            days_count += 366;
        }
        else
        {
            days_count += 365;
        }
    }

    return days_count;
}

// get the days difference between a given month and the start of the year (taking into consideration leap years)
int days_till_month(int m, int y)
{
    int days_count = 0;
    for (int i = 1; i < m; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            days_count += 31;
        }
        else if (i == 2)
        {
            days_count += (is_leap_year(y) == 1) ? 29 : 28;
        }
        else
        {
            days_count += 30;
        }
    }
    return days_count;
}

//****** end Procedures ******//

int main()
{
    int day, month, year, days_difference = 0;

    // 1 - read the variables from input in yyyy-mm-dd format
    scanf("%4d-%2d-%2d", &year, &month, &day);

    // 2 - calculate the days difference
    days_difference = day + days_till_month(month, year) + days_year_to_year(year);

    //fetch day name and print results
    printf("%s\n", get_day_by_number(days_difference));
    return 0;
}