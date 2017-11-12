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

void exercise10(void)
{
     //Exercise 10
    printf("\n\nExercise 10. \n\n");
    
    float a = 0, b = 0;
    int menu = 0;
    
    do{
        printf("\n\nPlease select operation:\n1) Enter operands\n2) Multiply operands\n3) Add operands\n4) Quit\n");
        menu = readInt();
        switch(menu){
        case 1:
            printf("Enter the first operand:");
            a = readFloat();
            printf("Enter the second operand:");
            b = readFloat();
            break;
        case 2:
            printf("Product is %.2f\n", a * b);
            break;
        case 3:
            printf("Sum is %.2f\n", a + b);
            break;
        default:
            break;
        }
    } while (menu != 4);
            
    
    
    
    printf("\nEnd of Exercise 10. \n\n");
    return;
}
/* [] END OF FILE */
