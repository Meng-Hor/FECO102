#include <stdio.h>

int main() {
    int n, i, j, center;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    center = (n + 1) / 2;
    
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i == center || j == center){
                printf("0");
            }else{
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}