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
                if(i%2==1){
                    printf("%d \t", j*2-1);
                }else{
                    printf("%d \t", j*2);
                }
            }
        }
        printf("\n");
    }

    return 0;
}