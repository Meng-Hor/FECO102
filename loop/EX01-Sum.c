#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n < 0){
            printf("Input must be positive integer!\n");
        }
    }while(n < 0);
    
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    
    printf("%d", sum);

    return 0;
}