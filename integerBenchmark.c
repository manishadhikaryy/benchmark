#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <math.h>

int main() {
    // Initialize time
    clock_t initial_time = clock();

    // set up registers
    register int num;
    register int num1 = 2;
    register int num2 = 4;

    double time_taken = 0.0;

    // 10^10 additions (of integer constants)
    for (int i=0; i < 100000; i++) {
        // (10^5) operations inside (10^5) operations give 10^10 operations
        for(int j = 0; j < 100000; j++) {
            num = num1 + num2;
        }
    }

    // 5 * 10^9 multiplications (of integer constants)
    for (int i=0; i < 10000; i++) {
        // (10^5) operations inside 5 * (10^4) operations give  5 * 10^9 operations
        for(int j = 0; j < 100000; j++) {
            num = num1 * num2;
        }
    }

    // 2 * 10^9 division (of integer constants)
    for (int i=0; i < (2 * 10000); i++) {
        // (10^5) operations inside 2 * (10^4) operations give  2 * 10^9 operations
        for(int j = 0; j < 100000; j++) {
            num = num2 / num1;
        }
    }

    clock_t final_time = clock();
    time_taken += (double) (final_time - initial_time) / CLOCKS_PER_SEC;
    // Print total time taken //
    printf("Benchmark time for the integer operation is: %lf s", time_taken);

    return 0;    
}
 

