#include <stdio.h>

int main() {
    int day, i;
    float rate, population;
    
    do{
        printf("Enter the starting number of organisms: ");
        scanf("%f", &population);
        if(population < 2){
            printf("Invalid input: must be greater than 2.\n\n");
        }
    }while(population < 2);
    
    do{
        printf("Enter the average daily population increase (as a percentage): ");
        scanf("%f", &rate);
        if(rate < 0){
            printf("Invalid input: must be greater than 0.\n\n");
        }
    }while(rate < 0);
    
    do{
        printf("Enter the number of days they will multiply: ");
        scanf("%d", &day);
        if(day < 1){
            printf("Invalid input: must be greater than 1.\n\n");
        }
    }while(day < 1);
    printf("\n");
    for(i = 1; i <= day; i++){
        population = population + (population * (rate / 100));
        printf("Day %d: %.2f\n", i, population);
    }

    return 0;
}