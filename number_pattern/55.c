#include <stdio.h>

int main() {
    int i, j, k, n;
    printf("Enter n value: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i>=j){
                printf("%d\t", j);
            }else{
                printf(" \t");
            }
        }
        printf("\n");
    }
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 1; j <= n-1; j++)
        {
            if(i+j<=n){
                printf("%d\t", j);
            }else{
                printf(" \t");
            }
        }
        printf("\n");
    }

    return 0;
}