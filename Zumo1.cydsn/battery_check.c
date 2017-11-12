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


int readBattery(void){
    
    return 2800; //TODO: replace with actual battery reading code;
}


int battery_check(void){
    int vBatMin=2185;
    
    int vBat=readBattery();
    
    while(vBat > vBatMin){
        return 1;
    }
    return 0;
}

float battery_level(void){
    int vBatMax=3055;
    int vBatMin=2185;
    
    int vBat = readBattery();

    return ((float) vBat - vBatMin)/((float) vBatMax - vBatMin);

}

/* [] END OF FILE */
