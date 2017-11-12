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

int readInt(void){
    int i;
    while(scanf("%d", &i) != 1){
        getchar();
    }
    return i;
}

float readFloat(void){
    float f;
    scanf("%f", &f);
    return f;
}

/* [] END OF FILE */
