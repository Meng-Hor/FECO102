#include <stdio.h>

int main() {
    
    float rate = 1.5;
    
    for(int i = 1; i <= 25; i++){
        float change = i * rate;
        printf("%d: %.1f\n", i, change);
    }

    return 0;
}