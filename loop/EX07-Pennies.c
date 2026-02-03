#include <stdio.h>

int main() {
    
    double income = 0.01, total = 0;
    int day, i;
    
    do{
        printf("Enter the number of day(s) worked: ");
        scanf("%d", &day); 
        
        if(day < 1){
            printf("Invalid input!\n");
        }
    }while(day < 1);
    
    printf("Earning breakdown by day:\n");
    for(i = 1; i <= day; i++){
        total = income + total;
        printf("Day %d: $%.2f\n", i, income);
        income = income * 2;
    }
    
    printf("Total earned: $%.2f", total);

    return 0;
}