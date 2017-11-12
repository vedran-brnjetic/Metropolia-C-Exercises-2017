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

#define ARRSIZE 5

void exercise9(void)
{

     //Exercise 9
    printf("\n\nExercise 9. \n\n");

    // use the constant to initialize the array size
    float arr[ARRSIZE] = {0};
    float minimum = 0;
    int i = 0;

    //loop through the array elements
    //use the constant to limit the loop cycle
    printf("Enter 5 floating point numbers. \n");
    for(i = 0; i < ARRSIZE; i++){
        //assign the values

        printf("Enter number %d: ", i+1);
        arr[i] = readFloat();
    }

    minimum = arr[0];
    for(i = 1; i < ARRSIZE; i++){
        if(arr[i] < minimum) minimum = arr[i];
    }
    //using the constant again
    printf("The smallest number in the array is %.3f\n", minimum);

    printf("\nEnd of Exercise 9. \n\n");
    return;
}
/* [] END OF FILE */
