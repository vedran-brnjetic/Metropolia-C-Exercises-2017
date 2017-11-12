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

#define NUM_OF_TRANSACTIONS 5

void currencyExchange(float exchangerate, float *transactions, int num_transactions){
    int i=0;


    for(i = 0; i < num_transactions; i++){
        *(transactions+i) *= exchangerate;
    }

    return;
}

void exercise17(void)
{
     //Exercise 17
    printf("\n\nExercise 17. \n\n");

    float transactions[NUM_OF_TRANSACTIONS] = { 0 };
    float exchangeRate;
    int i;

    do{
        printf("Please enter the exchange rate:");
        exchangeRate = readFloat();
        if(exchangeRate<=0) printf("Please enter a valid exchange rate (positive and different than 0");
    }
    while(exchangeRate <= 0);

    for(i = 0; i < NUM_OF_TRANSACTIONS; i++){
        printf("Please enter the transaction number %d:", i + 1);
        transactions[i] = readFloat();
    }
    currencyExchange(exchangeRate, transactions, NUM_OF_TRANSACTIONS);
    printf("\nConverted values are:\n\n");
    for(i = 0; i < NUM_OF_TRANSACTIONS; i++){
        printf("%d:%9.2f\n", i+1, transactions[i]);
    }

    printf("\nEnd of Exercise 17. \n\n");
    return;
}
/* [] END OF FILE */
