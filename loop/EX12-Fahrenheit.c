#include <stdio.h>

int main() {
    int i;
    float fahrenheit;
    
    for(i = 0; i <= 20; i++){
        fahrenheit = ((9 * i ) /5) + 32;
        printf("%d Celsius = %.2f Fahrenheit\n", i, fahrenheit);
    }

    return 0;
}