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
//Exercise 1
#include <project.h>
#include <stdio.h>

void exercise1(void)
{
    printf("\n\nExercise 1. \n\n");
    
    //my year, my month, my day, toyear, tomonth, today, age
    int ex1[7] = {1987,1,16,2017,10,27,0};
    
    printf("I was born on %d.%d.%d\n", ex1[2], ex1[1], ex1[0]);
    
    ex1[6] = ex1[3] - ex1[0];
    if(ex1[1]>ex1[4]){
        ex1[6]--;
    }
    else if(ex1[1] == ex1[4] && ex1[2]>ex1[5]){
        ex1[6]--;
    }
    
    printf("Today is %d.%d.%d\n", ex1[5], ex1[4], ex1[3]);
    printf("I am %d years old.\n", ex1[6]);
    printf("End of Exercise 1 \n\n");
    return;
}
/* [] END OF FILE */
