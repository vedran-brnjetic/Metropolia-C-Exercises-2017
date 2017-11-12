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

//Exercise 3
#include "project.h"
#include <stdio.h>

void exercise3(void)
{
    printf("\n\nExercise 3. \n\n");

    float ex3ticketPrice = 0;
    float ex3myMoney = 0;

    printf("Enter the price of the bus ticket?\n");
    scanf("%f", &ex3ticketPrice);
    printf("How much money do you have?\n");
    scanf("%f", &ex3myMoney);

    if (ex3myMoney >= ex3ticketPrice)
    {
        printf("You have enough money for a bus ticket!\n");
        printf("You have %.2f euros left!\n", ex3myMoney - ex3ticketPrice);
    }
    else
    {
        printf("You don't have enough money for a bus ticket!\n");
        printf("You are lacking %.2f euros :(\n", 0 - ex3myMoney + ex3ticketPrice);
    }

    printf("End of exercise\n\n");
    return;

}


/* [] END OF FILE */
