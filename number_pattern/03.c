#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(j % 2 == 0){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}