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

#define MAX_M_NAME_LENGTH 16

struct month{
    char name[MAX_M_NAME_LENGTH];
    int  number;
}newMonth, Months[12], *nextMonth;

void printMonth(struct month * m){
    printf("%-2d.\t%s\n", m->number, m->name);
}

void exercise20(void)
{
    printf("\n\nExercise 20. \n\n");

    int monthNo, done=0,op=0;
    char monthName[MAX_M_NAME_LENGTH];

    while(!done){
        printf("Please select operation:\n1:\tEnter Month\n2:\tFinished entering months\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                do{
                    unsigned i;
                    printf("Enter Month number\n");
                    scanf("%d", &monthNo);
                    //check if month is in valid range
                    if(monthNo > 0 && monthNo < 13){
                        Months[monthNo-1].number = monthNo; //assign the month.number
                        printf("Enter month Name\n");

                        //clear line feed
                        int c;
                        while ( (c = getchar()) != EOF && c != '\n') { }
                        //get month name
                        fgets(monthName, MAX_M_NAME_LENGTH, stdin);
                        if(monthName[strlen(monthName) - 1] == '\n') { monthName[strlen(monthName) - 1] = '\0'; }

                        for(i=0; i < strlen(monthName); i++){
                            Months[monthNo-1].name[i] = monthName[i];
                        }
                    }
                    else{
                        printf("Month not in a valid range, please enter 1-12\n");
                    }
                } while(monthNo < 1 || monthNo > 12);

                break;

                case 2:
                    done = 1;
                    break;
        }

    }

    //print the months that have been entered
    printf("\nHere are the months that you have entered\n");

    int i=0;

    for(i=0; i<13; i++){
        if(strlen(Months[i].name) != 0){
            printMonth(&Months[i]);
        }
    }

    printf("End of Exercise 20 \n\n");
    return;
}
/* [] END OF FILE */
