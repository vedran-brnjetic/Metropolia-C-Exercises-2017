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

void exercise2(void)
{
     //Exercise 2
    printf("\n\nExercise 2. \n\n");

    //declarations
    float ex2salary = 1238.75;
    float ex2taxPercentage = 17;
    float ex2tax = ex2salary * (ex2taxPercentage / 100);
    float ex2net = ex2salary - ex2tax;
    float ex2raise = 150;

    printf("My salary is %5.2f.\n", ex2salary);
    printf("My tax percentage is %.1f percent.\n", ex2taxPercentage);
    printf("I have to pay %5.2f euros tax.\n", ex2tax);
    printf("I have %5.2f euros to spend or save.\n", ex2net);
    printf("My boss raises my salary by %5.2f euros.\n", ex2raise);

    //salary increase
    ex2salary += ex2raise;
    //recalc tax and net
    ex2tax = ex2salary * (ex2taxPercentage / 100);
    ex2net = ex2salary - ex2tax;

    printf("My new salary is %5.2f.\n", ex2salary);
    printf("After taxes I have %5.2f euros.\n", ex2net);
    printf("End of Exercise 2 \n\n");

    return;

}
/* [] END OF FILE */
