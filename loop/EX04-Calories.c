#include <stdio.h>

int main() {
    
    for(int i = 10; i <= 30; i++){
        float rate = 3.9;
        float total = rate * i;
        
        if(i % 5 == 0){
            printf("%d (min): %.1f (cal)\n", i, total);
        }
    }

    return 0;
}