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
    for (int i = 0; i < 100000; i++) {
        // (10 ^ 5) * (10 ^ 5) = 10 ^ 10 Operation (additions)
        for(int j = 0; j < 100000; j++){
            num = num1 + num2;
        }
    }

    // 5 * 10^9 multiplications 
    for (int i=0; i < (5 * 10000); i++) {
        // (10^5) operations inside 5 * (10^4) operations give  5 * 10^9 operations
        for(int j = 0; j < 100000; j++) {
            num = num1 * num2;
        }
    }

    // 2 * 10^9 division
    for (int i=0; i < (2 * 10000); i++) {
        // (10^5) operations inside 2 * (10^4) operations give  2 * 10^9 operations
        for(int j = 0; j < 100000; j++) {
            num = num2 / num1;
        }
    }
    
    clock_t final_time = clock();
    time_taken = (double) (final_time - initial_time) / CLOCKS_PER_SEC;
    // print final time 
    printf(" Benchmark time for the double operation is: %lf s", time_taken);

    return 0; 
}