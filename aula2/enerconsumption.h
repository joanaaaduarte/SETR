#ifndef ENERCONSUMPTION_H
#define ENERCONSUMPTION_H

#include <stdio.h>
#include <stdlib.h>

#define COST_KWH 0.16
#define READINGS_PER_DAY 96  // 24h * 4 (readings per hour)

void ecInit(float vect[]);
void ecAdd(float vect[], int index, float value);
void dtSum(float vect[], float *peak, float *dailyValue, float *dailyCost);

#endif // ENERCONSUMPTION_H
