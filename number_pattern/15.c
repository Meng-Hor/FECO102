#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    
    for(i = 1; i <= n; i++)
    {
        for(j = 0; j <= n - 1; j++)
        {
            if(i + j > n)
            {
                printf("%d \t", n);
            }
            else
            {
                printf("%d \t", i + j);
            }
        }
        printf("\n");
    }

    return 0;
}