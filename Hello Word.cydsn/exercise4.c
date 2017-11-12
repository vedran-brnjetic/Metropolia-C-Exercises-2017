/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
//Exercise 4
#include "project.h"
#include <stdio.h>

void exercise4(void)
{
    printf("\n\nExercise 4. \n\n");

    //take today's date and print tomorrow's taking into account the month and year ending
    //put 29 days for february by default to pass the generic date format test.
    int ex4month_length[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int ex4year = 0;
    int ex4month = 0;
    int ex4day = 0;

    printf("Enter today's date (d.m.y):\n");
    scanf("%d.%d.%d", &ex4day, &ex4month, &ex4year);

    //check for obvious date format issue
    if(ex4day > ex4month_length[ex4month-1] || ex4month > 12)
    {
        printf("Date entered in the wrong format. Terminating...\n");
        return;
    }

    //reducing february to 28 for default value
    ex4month_length[1]--;

    //calculate if leap year (to save cycles, we will do this only if the month is February and day is >= 28)
    if (ex4day >= 28 && ex4month == 2)
    {
        if(ex4year%4 == 0)
        {
            if( ex4year%100 == 0)
            {
                // year is divisible by 400, hence the year is a leap year
                if ( ex4year%400 == 0)
                {
                    printf("%d is a leap year.\n", ex4year);
                    ex4month_length[1]=29;
                }
                else
                {
                    printf("%d is not a leap year.\n", ex4year);
                }
            }
            else
            {
                printf("%d is a leap year.\n", ex4year );
                ex4month_length[1]=29;
            }
        }
        else
        {
            printf("%d is not a leap year.\n", ex4year);
        }
        //second date test, to see if "TODAY" is 29. February on non-leap year
        if(ex4month_length[1] == 28 && ex4day > 28)
        {
            printf("Error, wrong initial date, 29th February on non-leap year. Terminating...");
            return;
        }
    }

    ex4day ++;
    if(ex4day > ex4month_length[ex4month-1])
    {
        ex4month ++;
        ex4day = 1;
    }
    if(ex4month > 12)
    {
        ex4month = 1;
        ex4year ++;
    }

    printf("Tomorrow is: %d.%d.%d\n", ex4day, ex4month, ex4year);

    printf("End of exercise.\n");
    return;

}
/* [] END OF FILE */
