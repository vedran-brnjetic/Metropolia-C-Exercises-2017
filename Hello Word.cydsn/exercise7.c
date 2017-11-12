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

#define ARRSIZE 12


void exercise7(void)
{
     //Exercise 7
    printf("\n\nExercise 7. \n\n");

    //declare the array and initialize all elements to 0
    int arr[ARRSIZE]={0};

    printf("Please enter the starting number: ");
    arr[0] = readInt();

    //first loop to fill up the array
    int i;
    for(i = 1; i < ARRSIZE; i++){
        arr[i] = arr[i-1] + 1;
    }


    //second loop to print out the array
    for(i = 0; i < ARRSIZE; i++){
        //print only the value here (just into the buffer for now)
        printf("%d", arr[i]);

        //check if it is the last element of the array, if it is don't print a comma,
        //otherwise print a comma after every number
        if(i < 11){
            printf(", ");
        }
        //if the element is the last one, don't print the comma,
        //end the buffer instead and print all of it out.
        else printf("\n");
    }

    printf("\nEnd of Exercise 7. \n\n");
    return;
}

/* [] END OF FILE */
