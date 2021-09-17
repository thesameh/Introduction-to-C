// Sameh Shahin ew20b001

#include <stdlib.h>

int main()
{

    /* 
    ** Solution attempt 4 (final): 
    ** adaptation of solutions 3 and 1 (loop_counter = start_day_of_week)
    */

    // variables
    int current_day = 1;                    // start of printed days
    int total_days_count, loop_counter = 0; // input

    // read the input variables
    scanf("%d %d", &total_days_count, &loop_counter);

    // print the empty days
    printf("%*s", loop_counter * 3, "");

    // start the printed days loop
    while (current_day <= total_days_count)
    {
        loop_counter++;

        printf("%3d", current_day);
        current_day++;

        // line-break after the end of either the week or the loop (end of loop line-break is inside the loop to avoid douple printing if they both end together like test3)
        if (loop_counter % 7 == 7 || loop_counter % 7 == 0 || current_day > total_days_count)
        {
            printf("\n");
        }
    }

    /* these are for all of the below solutions
    int total_days_count, start_day_of_week = 0;
    scanf("%d %d", &total_days_count, &start_day_of_week); 
    */

    /* 
    ** Solution attempt 1 : 
    ** week line-break by a variable and if conditions 
    ** Might be over complicated (I tend to do that often which what I want to improve)
    */

    /*     
    // loop variables
    int day_of_week = 1; 
    int current_day = 1; 
    
    while (current_day <= total_days_count)
    {
        if (start_day_of_week >= 1)
        {
            printf("   ");
            start_day_of_week--;
        }
        else
        {
            printf("%3d", current_day);
            current_day++;
        }

        if (day_of_week == 7 || current_day > total_days_count)
        {
            printf("\n");
            day_of_week = 1;
        }
        else
        {
            day_of_week++;
        }
    } 
    */

    //****************** Solution attempt 2 : week loop with days check  ********************/

    /*  
    int current_day = 1;

    for (int i = 1; i <= 7; i++)
    {
        if (current_day <= total_days_count)
        {
            if (start_day_of_week >= 1)
            {
                printf("   ");
                start_day_of_week--;
            }
            else
            {
                printf("%3d", current_day);
                current_day++;
            }

            // line-break and reset the week loop
            if (i == 7)
            {
                i = 0;
                printf("\n");
            }
        }
        else
        {
            // end of both the week and the month case test3 (avoid douple line break)
            if (i != 1)
            {
                printf("\n");  
            }
            
            break;
            
        }
    }
    */

    //**************** Solution attempt 3:  loop counter ************//

    /*     
    int loop_counter = 1;
    int current_day = 1;
    int total_digits = total_days_count + start_day_of_week;

    while (current_day <= total_days_count)
    {
        if (start_day_of_week >= 1)
        { // print empty days first and reduce them
            printf("   ");
            start_day_of_week--;
        }
        else
        { // start printing month days
            printf("%3d", current_day);
            current_day++;
        }

        // week and end of loop line-break (end of loop line-break is in the loop to avoid douple printing it)
        if (loop_counter % 7 == 7 || loop_counter % 7 == 0 || loop_counter == total_digits)
        {
            printf("\n");
        }
        loop_counter++;
    } 
    */

    return 0;
}
