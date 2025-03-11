#include <stdio.h>
#include <stdlib.h>

#include "enerconsumption.h"

#define COS_KWH 0.16
#define READINGS_PER_DAY 96 // 24h * 4 (readings per hour)

void ecInit(float vect[]){
    for(int i = 0; i < READINGS_PER_DAY; i++)
        vect[i] = 0.0;
}

void ecAdd(float vect[], int index, float value) {
    if (index >= 0 && index < READINGS_PER_DAY) {
        vect[index] = value;
    } else {
        printf("Invalid index! Must be between 0 and %d\n", READINGS_PER_DAY - 1);
    }
}


void dtSum(float vect[], float *peak, float *dailyValue, float *dailyCost) {
    *peak = 0.0;
    *dailyValue = 0.0;
    
    for (int i = 0; i < READINGS_PER_DAY; i++) {
        if (vect[i] > *peak) {
            *peak = vect[i];
        }
        *dailyValue += vect[i];
    }
    
    *dailyCost = (*dailyValue) * COST_KWH;
}


