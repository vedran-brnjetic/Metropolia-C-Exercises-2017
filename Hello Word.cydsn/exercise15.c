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


void compscale(float *x, float *y){
    if(*x <= *y){
        *x = *x / *y;
        *y = 1;
    }
    else
    {
        *y = *y / *x;
        *x = 1;
    }
}

void exercise15(void)
{
     //Exercise 15
    printf("\n\nExercise 15. \n\n");

    float a,b;

    printf("\nPlease enter number 1:\n");
    do{
        a = readFloat();
        if(a < 0){
            printf("\nNumber must be positive, please try again:\n");
        }
    }while(a < 0);
    printf("\nPlease enter number 2:\n");
    do{
        b = readFloat();
        if(b < 0){
            printf("\nNumber must be positive, please try again:\n");
        }
    }while(b < 0);

    compscale(&a, &b);

    printf("Scaled value 1: %.2f\n", a);
    printf("Scaled value 2: %.2f\n", b);


    printf("\nEnd of Exercise 15. \n\n");
    return;
}
/* [] END OF FILE */
