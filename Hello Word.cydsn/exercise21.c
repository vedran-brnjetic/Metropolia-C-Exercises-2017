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
//Exercise 1
#include "project.h"
#include <stdio.h>
#include "common_functions.h"

#define NUMBER_OF_STUDENTS 5
#define MAX_NAME_LENGTH 30


struct student{
    char firstname[MAX_NAME_LENGTH];
    char lastname[MAX_NAME_LENGTH];
    int  credits;
};

void enterStudentName(char * stu, char nName[], int stuNumber){
    
    char temp[MAX_NAME_LENGTH] = "";
    unsigned i;
    
    do{
        printf("Enter %s name for sutudent %d.\n", nName, stuNumber);
        fgets(temp, MAX_NAME_LENGTH, stdin);
        if(temp[strlen(temp) - 1] == '\n') { temp[strlen(temp) - 1] = '\0'; }
            
        for(i=0; i < strlen(temp); i++){
            stu[i] = temp[i];
        }
    }
    while(strlen(temp)==0);
    
    return;
}

void enterStudentCredits(int * cred, int stuNumber){
    
    printf("Please enter credits for Student %d:\n", stuNumber);
    do{
        *cred = readInt();
        if (cred < 0){
            printf("Please enter a positive number of credits:");
        }
    }
    while(cred < 0);
    
    return;
    
}

void exercise21(void)
{
    printf("\n\nExercise 21. \n\n");
    struct student studentRecord[NUMBER_OF_STUDENTS]={};
    //clear \n from menu selection
    
    
    unsigned i;
    
    for(i=0; i < NUMBER_OF_STUDENTS; i++){
        int c;
        while ( (c = getchar()) != EOF && c != '\n') { }

        enterStudentName(studentRecord[i].firstname, "first", i+1);
        enterStudentName(studentRecord[i].lastname, "last", i+1);
        enterStudentCredits(&studentRecord[i].credits, i+1);
    }
    
    printf("\nHere is the data you entered:\n\n");
    for(i=0; i < NUMBER_OF_STUDENTS; i++){
        printf("%-30s\t%-30s\t%-3d\n", 
            studentRecord[i].firstname, 
            studentRecord[i].lastname, 
            studentRecord[i].credits);
    }
    
    printf("End of Exercise 21 \n\n");
    return;
}
/* [] END OF FILE */
