#include <stdio.h>

int main() {
    int i, j, k, n;
    printf("Enter n value: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i >= j)
            {
                printf("%d\t", j);
            }else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}