#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            sum = sum + 1;
            printf("%d \t", sum);
        }
        printf("\n");
    }

    return 0;
}