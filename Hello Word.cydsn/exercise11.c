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

void exercise11(void)
{
     //Exercise 11
    printf("\n\nExercise 11. \n\n");

    float loanAmt = 0, loanInt = 0, payment, interestPaid = 0;

    while(loanAmt <= 0 || loanInt <= 0){
        if(loanAmt <= 0){
            printf("How much money do you wish to borrow, \nI assure you it's the best day of your life:\n");
            loanAmt = readFloat();
        }
        if(loanInt <= 0){
            printf("As our favourite customer, you also get to choose your interest rate. \nNo strings attached (don't mind that noose around your neck).\nPlease enter the interest in percentage:\n");
            loanInt = readFloat();
        }
        if(loanAmt <= 0 || loanInt <= 0){
            printf("You either want to give US money, or you want US to pay YOU interest. Please concentrate and try again. (no negative numbers, and interest has to be above 0)\n");
        }
    }

    while(loanAmt > 0){
        printf("\n\nIt's been a while... Time to pay up, how much would you like to pay now?\n");

        payment = 0;

        while(payment <= 0){
            payment = readFloat();
            if(payment <= 0){
                printf("We are not giving you any more money, time for you to pay. (no negative numbers, try again)\n");
            }
        }

        interestPaid += loanAmt * (loanInt / 100);
        loanAmt += loanAmt * (loanInt / 100);
        loanAmt -= payment;
        if(loanAmt>0){
            printf("Thanks, you still owe %.2f\n", loanAmt);
        }
        else{
            printf("Thanks, you're done, here's your change %.2f\n", - loanAmt);
        }
    }
    printf("Wow, you actually made it. We can replace that noose with a tie now. \nYou successfully repaid your loan and earned us %.2f in interest. Good work.\n\n", interestPaid);

    printf("\nEnd of Exercise 11. \n\n");
    return;
}
/* [] END OF FILE */
