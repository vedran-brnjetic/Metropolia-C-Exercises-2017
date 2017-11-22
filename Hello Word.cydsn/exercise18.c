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

#define MAX_NAME_LENGTH 30

void readName(char *name){
    fgets(name, MAX_NAME_LENGTH, stdin);
    if(name[strlen(name) - 1] == '\n') { name[strlen(name) - 1] = '\0'; }
    return;
}

void exercise18(void)
{
     //Exercise 18
    printf("\n\nExercise 18. \n\n");

    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];

    int c;
    while ( (c = getchar()) != EOF && c != '\n') { }

    printf("Please enter your name:");
    readName(firstName);

    printf("Please enter your last name:");
    readName(lastName);

    char fullName[(2 * MAX_NAME_LENGTH) + 1]="";

    if(strlen(firstName) + strlen(lastName) + 1 >= (2 * MAX_NAME_LENGTH) + 1){
        printf("Error, the names don't fit the third string\n");
        return;
    }

    strcat(fullName, lastName);
    strcat(fullName, " ");
    strcat(fullName, firstName);

    printf("Hello, %s.\nString length: %d\n", fullName, strlen(fullName));

    printf("\nEnd of Exercise 18. \n\n");
    return;
}
/* [] END OF FILE */
