#include <stdio.h>

int main() {
    
    int year, i, j, rain, totalMonth = 0, totalRain = 0;
    float avg;
    
    do{
        printf("Enter year(s): ");
        scanf("%d", &year);
        if(year < 1){
            printf("Year cannot be less than 1.\n");
        }
    }while(year < 1);
    
    for(i = 1; i <= year; i++){
        printf("\n////////// Year %d //////////\n", i);
        for(j = 1; j <= 12; j++){
            do{
                printf("----- Month %d -----\n", j);
                printf("Enter the amount of rainfall in inches: ");
                scanf("%d", &rain);
                if(rain < 0){
                    printf("The input must be positive!\n");
                }
            }while(rain < 0);
            
            totalRain = rain + totalRain;
        }
    }
    
    totalMonth = year * 12;
    avg = (float)totalRain / totalMonth;
    
    printf("----------------------------------------\n");
    printf("Number of months: %d\n", totalMonth);
    printf("Total rainfall: %d inches\n", totalRain);
    printf("Average rainfall per month: %.2f inches\n", avg);

    return 0;
}