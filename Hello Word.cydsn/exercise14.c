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


int getvalue(int low, int high){
    int value;

    do{
        printf("Please enter the value between %d and %d\n", low, high);
        value = readInt();
        if(value < low || value > high){
            printf("Error, please respect the boundaries, try again\n");
        }
    }
    while(value < low || value > high);

    return value;
}

void exercise14(void)
{
     //Exercise 14
    printf("\n\nExercise 14. \n\n");
    int a, b;

    a = getvalue(10,20);
    b = getvalue(0,5);

    printf("%d multiplied by %d is %d.\n", a, b, a * b);

    printf("\nEnd of Exercise 14. \n\n");
    return;
}
/* [] END OF FILE */
