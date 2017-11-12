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

float calcRate(int e, int d){
    return (float)d / e;
}

void exercise12(void)
{
     //Exercise 12
    printf("\n\nExercise 12. \n\n");

    int eur, usd;
    float exchangeAmt, rate;

    printf("Enter the Euro value:\n");
    eur = readInt();
    printf("Enter the USD value:\n");
    usd = readInt();

    rate = calcRate(eur,usd);

    printf("\n\nExchange rate is %.4f\n", rate);

    printf("How many Euros do you want to exchange?\n");
    exchangeAmt = readFloat();
    printf("You will get %.2f USD\n", exchangeAmt * rate);

    printf("\nEnd of Exercise 12. \n\n");
    return;
}
/* [] END OF FILE */
