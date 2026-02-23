#include <stdio.h>

int main() {
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            if(i>j){
                printf("%d\t", i);
            }else{
                printf("%d\t", j);
            }
        }
        printf("\n");
    }

    return 0;
}