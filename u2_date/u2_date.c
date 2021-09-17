// Sameh Shahin ew20b001

#include <stdio.h>

int main()
{
    // variables
    int day, month, year = 0;

    // 1- read the variables from input in m/d/yyyy format
    scanf("%2d/%2d/%4d", &month, &day, &year);

    // 2-  formatting

    // 3- print variables in the yyyy-mm-dd date format
    printf("%04d-%02d-%02d\n", year, month, day);

    // return int to finish
    return 0;
}

/* 
** as no actuall formatting was needed here I will write a possible explination just for me. 
**   
** I believe the %2d/ in the scanf specifies that it should read up to 2 digits but only untill the "/" given in the format
** and the %02d in printf specifies that it should print 2 digits and lead by 0 if digits count is not sufficint  
**
** which is some how equivalent to the %2[^/] when dealing with strings to specify the divider "/" instead of the default "space" 
*/