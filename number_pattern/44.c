#include <stdio.h>

int main() {
    int i, j, k, n;
    printf("Enter n value: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2*(n-1); j++)
        {
            if(i<=2*(i-1)){
                if(i>j){
                    printf("%d\t", i+j);
                }else{
                    printf("%d\t", (i+j)-(j-i+1)*2);
                }
                // if(i%2==1){
                //     printf("%d \t", j);
                // }else{
                //     printf("%d \t", j*2);
                // }
            }else{
                printf(" \t");
            }
        }
        printf("\n");
    }

    return 0;
}