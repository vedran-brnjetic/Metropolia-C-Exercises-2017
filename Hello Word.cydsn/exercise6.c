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
#include "project.h"
#include <stdio.h>
#include "common_functions.h"

void exercise6(void)
{
     //Exercise 6
    printf("\n\nExercise 6. \n\n");

    //declarations
    int currentHours = 0;
    int currentMinutes = 0;
    int sleepHours = 0;
    int sleepMinutes = 0;
    int wakeUpHours = 0;
    int wakeUpMinutes = 0;
    int dayDiff = 0;

    //enter data
    printf("Enter the current time (hh:mm):");
    scanf("%d:%d", &currentHours, &currentMinutes);
    printf("How much time do you wish to sleep? (hh:mm):");
    scanf("%d:%d", &sleepHours, &sleepMinutes);

    //check if the data is correctly formatted, if not, extrapolate and recalculate
    if(sleepMinutes >= 60){
        //add extra ours from minute multiples of 60
        sleepHours += sleepMinutes / 60;
        //keep the remainder minutes as minutes
        sleepMinutes = sleepMinutes % 60;
    }

    //add up minutes with minutes, hours with hours
    wakeUpMinutes = currentMinutes + sleepMinutes;
    wakeUpHours = currentHours + sleepHours;

    //if minutes are 60 or more, add more hours to hours, reduce minutes to below 60
    if(wakeUpMinutes >= 60){
        wakeUpHours += wakeUpMinutes / 60;
        wakeUpMinutes = wakeUpMinutes % 60;
    }

    //check if hours go into next day (or more days)
    if(wakeUpHours >= 24){
        dayDiff = wakeUpHours / 24;
        wakeUpHours = wakeUpHours % 24;
    }

    //show the wake up time
    printf("If you go to bed now, you must wake up at %02d:%02d", wakeUpHours, wakeUpMinutes);

    //show if the time is tomorrow, or n days later
    if(dayDiff == 1){
        printf(" the next day.\n");
    }
    else if(dayDiff > 1){
        printf(" %d days later.\n", dayDiff);
    }
    else{
        printf(".\n");
    }


    printf("\nEnd of Exercise 6. \n\n");
    return;
}
/* [] END OF FILE */
