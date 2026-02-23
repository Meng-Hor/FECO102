#include <stdio.h>

int main() {
    int i, j, k, n;
    printf("Enter n value: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n*2-1; j++)
        {
            if(j>i*2-1){
                printf(" \t");
            }else{
                printf("%d\t",j);
            }
        }
        printf("\n");
    }

    return 0;
}