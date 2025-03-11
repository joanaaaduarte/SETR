#include <stdio.h>
#include <stdlib.h>
#include "enerconsumption.h"

int main() {
    float consumption[READINGS_PER_DAY];
    ecInit(consumption);
    
    // Example: Adding some readings
    ecAdd(consumption, 0, 0.5);
    ecAdd(consumption, 1, 0.8);
    ecAdd(consumption, 2, 1.2);
    
    float peak = 0.0, dailyValue = 0.0, dailyCost = 0.0;
    dtSum(consumption, &peak, &dailyValue, &dailyCost);
    
    printf("Peak Consumption: %.2f kW/h\n", peak);
    printf("Total Daily Consumption: %.2f kW/h\n", dailyValue);
    printf("Total Daily Cost: %.2f EUR\n", dailyCost);
    
    return 0;
}
