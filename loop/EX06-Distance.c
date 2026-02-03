#include <stdio.h>

int main() {
    
    int speed, hour, i, distance = 0;
    
    do{
        printf("Enter the speed in mph: ");
        scanf("%d", &speed);
        printf("Enter the hour(s) traveled: ");
        scanf("%d", &hour);
        
        if(speed < 0 || hour < 1){
            printf("Invalid input: Speed must be positive and hour must be greater than 1.\n");
        }
    }while(speed < 0 || hour < 1);
    
    for(i = 1; i <= hour; i++){
        distance = speed * i;
        printf("Hour %d: %d miles\n", i, distance);
    }

    return 0;
}