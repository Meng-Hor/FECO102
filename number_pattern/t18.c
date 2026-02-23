#include <stdio.h>

int main() {
    int n;
    printf("input n: ");
    scanf("%d", &n);
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            if(i>j)
            {
                printf("%d \t", i);
            }else
            {
                printf("%d \t", j);
            }
        }
        for(int k=2; k<=n;k++)
        {
            if(i>k)
            {
                printf("%d \t", i);
            }else
            {
                printf("%d \t", k);
            }
        }
       
        printf("\n");
    }
   
    for(int i=2;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(i>j)
            {
                printf("%d \t", i);
            }else
            {
                printf("%d \t", j);
            }
        }
        for(int k=2; k<=n;k++)
        {
            if(i>k)
            {
                printf("%d \t", i);
            }else
            {
                printf("%d \t", k);
            }
        }
       
        printf("\n");
    }

    return 0;
}