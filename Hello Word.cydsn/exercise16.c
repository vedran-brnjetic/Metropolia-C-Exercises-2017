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

float average(float *x, float *y){
    float avg = (*x+*y) / 2;
    *x -= avg;
    *y -= avg;

    return avg;
}

void exercise16(void)
{
     //Exercise 16
    printf("\n\nExercise 16. \n\n");

    float a = 0, b = 0;

    printf("Hi, we need you to enter your height and your partner's height in meters.\n");
    while(a <= 0){
        printf("Enter your height here:");
        a = readFloat();
        if (a <= 0){
            printf("Sorry, you can't have negative height. Please try again\n");
        }
    }
    while(b <= 0){
        printf("Enter your partner's height here:");
        b = readFloat();
       if (b <= 0){
            printf("Sorry, your partner can't have negative height. Please try again\n");
        }
    }

    printf("Your average height as a couple is %.2f meters, \nif you wish to be of equal height one of you needs to wear %.2fcm high heels.\nYou are %.2f cm %s than average whereas your partner is %.2f cm %s than average\n",
        average(&a, &b), //call function to get average
        (a > b) ? (a + (b * -1)) * 100 : ((-1 * a) + b) * 100, //more complex way of getting a double STD absolute, multiply by 100 cm
        (a > 0) ? a * 100 : b * 100, //easier way of getting absolute STD
        (a > 0) ? "taller" : "shorter", //positive vs negative
        (a > 0) ? a * 100 : b * 100,
        (b > 0) ? "taller" : "shorter"
    );



    printf("\nEnd of Exercise 16. \n\n");
    return;
}
/* [] END OF FILE */
