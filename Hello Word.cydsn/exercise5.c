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

void exercise5(void)
{
     //Exercise 5
    printf("\n\nExercise 5. \n\n");

    //declarations
    float ex5masskg = 0;
    float ex5heightcm = 0;
    float ex5bmi = 0;

    printf("Please insert your weight in kilograms (dont't lie (too much)).\n");
    scanf("%f", &ex5masskg);
    printf("Please insert your height in centimeters: (dont't stretch it too much).\n");
    scanf("%f", &ex5heightcm);

    //because why convert cm to m
    ex5bmi = ex5masskg / ((ex5heightcm * ex5heightcm) / 10000);

    printf("Your BMI is %.2f.\n", ex5bmi);

    printf("According to BMI you have ");
    if(ex5bmi < 18.5)
    {
        printf("underweight.\n");
    }
    else if(ex5bmi >= 18.5 && ex5bmi <= 22.5)
    {
        printf("normal weight.\n");
    }
    else
    {
        printf("overweight.\n");
    }


}
/* [] END OF FILE */
