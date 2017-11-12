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
#include "exercise1.h"
#include "exercise2.h"
#include "exercise3.h"
#include "exercise4.h"
#include "exercise5.h"
#include "exercise6.h"
#include "exercise7.h"
#include "exercise8.h"
#include "exercise9.h"
#include "exercise10.h"
#include "exercise11.h"
#include "exercise12.h"
#include "exercise13.h"
#include "exercise14.h"
#include "exercise15.h"
#include "exercise16.h"
#include "exercise17.h"
#include "exercise18.h"
#include "exercise19.h"
#include "exercise20.h"
#include "exercise21.h"
#include "common_functions.h"


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_1_Start();
    printf("\n\n Program's Execution started \n\n");
    
    
    int exercise_number = 0;
    
    while(1)
    {
        do
        {
            printf("Please select exercise between 1 and 21\n");
            exercise_number = readInt();
        
            switch(exercise_number)
            {
                case 1:
                    exercise1();
                    break;
                case 2:
                    exercise2();
                    break;
                case 3:
                    exercise3();
                    break;
                case 4:
                    exercise4();
                    break;
                case 5:
                    exercise5();
                    break;
                case 6:
                    exercise6();
                    break;
                case 7:
                    exercise7();
                    break;
                case 8:
                    exercise8();
                    break;
                case 9:
                    exercise9();
                    break;
                case 10:
                    exercise10();
                    break;
                case 11:
                    exercise11();
                    break;
                case 12:
                    exercise12();
                    break;
                case 13:
                    exercise13();
                    break;
                case 14:
                    exercise14();
                    break;
                case 15:
                    exercise15();
                    break;
                case 16:
                    exercise16();
                    break;
                case 17:
                    exercise17();
                    break;
                case 18:
                    exercise18();
                    break;
                case 19:
                    exercise19();
                    break;
                case 20:
                    exercise20();
                    break;
                case 21:
                    exercise21();
                    break;
                default:
                    printf("Input outside of range or exercise not implemented yet. Please try again!\n\n");
            }//switch
        }//do
        while (exercise_number < 0 || exercise_number > 21);
    }//while(1)
}

int _write(int file, char *ptr, int len)
{
    (void)file; /* Parameter is not used, suppress unused argument warning */
	int n;
	for(n = 0; n < len; n++) {
        if(*ptr == '\n') UART_1_PutChar('\r');
		UART_1_PutChar(*ptr++);
	}
	return len;
}

int _read (int file, char *ptr, int count)
{
    int chs = 0;
    char ch;
 
    (void)file; /* Parameter is not used, suppress unused argument warning */
    while(count > 0) {
        ch = UART_1_GetChar();
        if(ch != 0) {
            UART_1_PutChar(ch);
            chs++;
            if(ch == '\r') {
                ch = '\n';
                UART_1_PutChar(ch);
            }
            *ptr++ = ch;
            count--;
            if(ch == '\n') break;
        }
    }
    return chs;
}
/* [] END OF FILE */
