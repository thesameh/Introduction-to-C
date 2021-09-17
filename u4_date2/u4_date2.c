// Sameh Shahin ew20b001

#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // variables
    char *day_suffix = "th";      //default
    char *month_name = "January"; //default
    int day, month, year = 0;

    // 1 - read the variables from input in yyyy-mm-dd format
    scanf("%4d-%2d-%2d", &year, &month, &day);

    // 2.1 - format day end
    if (day == 1 || day == 21 || day == 31)
    {
        day_suffix = "st";
    }
    else if (day == 2 || day == 22)
    {
        day_suffix = "nd";
    }
    else if (day == 3 || day == 23)
    {
        day_suffix = "rd";
    }

    // 2.2 format month
    switch (month)
    {
    case 2:
        month_name = "February";
        break;
    case 3:
        month_name = "March";
        break;
    case 4:
        month_name = "April";
        break;
    case 5:
        month_name = "May";

        break;
    case 6:
        month_name = "June";

        break;
    case 7:
        month_name = "July";
        break;
    case 8:
        month_name = "August";
        break;
    case 9:
        month_name = "September";
        break;
    case 10:
        month_name = "October";
        break;
    case 11:
        month_name = "November";
        break;
    case 12:
        month_name = "December";
        break;
    }

    // 3 print formatted date
    printf("%d%s of %s, %4d\n", day, day_suffix, month_name, year);
    return 0;
}
