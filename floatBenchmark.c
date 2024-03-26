#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    // Initialize time
    clock_t initial_time = clock();

    // set up registers
    register double num;
    register double num1 = 1.1;
    register double num2 = 1.2;

    double time_taken = 0.0;

    //10^10 additions of double
    for (int i = 0; i < pow(10, 5); i++) {
        // (10 ^ 5) * (10 ^ 5) = 10 ^ 10 Operation (additions)
        for(int j = 0; j < pow(10,5); j++){
            num = num1 + num2;
        }
    }


    return 0; 
}