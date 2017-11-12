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
#include <stdlib.h>
#include <time.h>

void hashtags(int a){

    while(a>0){
        printf("#");
        a--;
    }
    printf("\n");
    return;
}

void exercise13(void)
{
     //Exercise 13
    printf("\n\nExercise 13. \n\n");

    int i;
    srand(time(NULL));

    for(i=1; i <= 20; i++){
        hashtags(rand() % 20 +1);
    }

    printf("\nEnd of Exercise 13. \n\n");
    return;
}
/* [] END OF FILE */
