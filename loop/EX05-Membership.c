#include <stdio.h>

int main() {
    
    double fee = 2500, rate = 0.04;

    for(int i = 1; i <= 6; i++){
        fee = fee + (fee * rate);
        printf("%d: $%.2f\n", i, fee);
    }

    return 0;
}