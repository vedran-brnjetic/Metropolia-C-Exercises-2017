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

#define ARRSIZE 10

void exercise8(void)
{
     //Exercise 8
    printf("\n\nExercise 8. \n\n");

    //define the array size constant (used in multiple places in code)



    // use the constant to initialize the array size
    int arr[ARRSIZE] = {0};
    int sum = 0;
    int i = 0;

    //loop through the array elements
    //use the constant to limit the loop cycle
    for(i=0; i < ARRSIZE; i++){
        //assign the value once, but check the value at the end and repeat if necessary
        do{
            printf("Enter value for element %d:", i);
            arr[i] = readInt();

            //check the value and print error if necessary, otherwies use the opportunity to
            //add the number to the sum.
            if(arr[i] < 0){
                printf("Error: the number must be positive!, please try again.\n");
            }            
        }while(arr[i] < 0);
        
        sum += arr[i];
    }
    //using the constant again
    printf("The sum of %d elements in array is %d\n", ARRSIZE, sum);

    printf("\nEnd of Exercise 8. \n\n");
    return;
}
/* [] END OF FILE */
