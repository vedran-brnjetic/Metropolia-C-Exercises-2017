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



void ask(char question[], char *answer, int limit){

    printf("%s\n", question);

    fgets(answer, limit, stdin);
    if(answer[strlen(answer) - 1] == '\n') { answer[strlen(answer) - 1] = '\0'; }


    return;
}

void exercise19(void)
{
    printf("\n\nExercise 19. \n\n");

    char fullname[50]="";
    char address[250]="";
    char postoffice[80]="";

    //cleanup newline
    int c;
    while ( (c = getchar()) != EOF && c != '\n') { }

    while(strlen(fullname) == 0){
        ask("Please enter your full name:", fullname, 50);
        if(strlen(fullname) == 0){
            printf("You didn't enter your name, please try again.\n");
        }

    }

    while(strlen(address) == 0){
        ask("Please enter your address:", address, 250);
        if(strlen(address) == 0){
            printf("You didn't enter your address, please try again.\n");
        }
    }

    while(strlen(postoffice) == 0){
        ask("Please enter your postoffice code and locality:\n", postoffice, 80);
        if(strlen(postoffice) == 0){
            printf("You didn't enter your postcode, please try again.\n");
        }
    }

    printf("\nYour address is:\n%s\n%s\n%s\n\n", fullname, address, postoffice);
    printf("End of Exercise 19 \n\n");
    return;
}
/* [] END OF FILE */
