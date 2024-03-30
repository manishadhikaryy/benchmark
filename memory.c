#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    // get starting time
    clock_t initial_time = clock(); 
    double time_taken = 0.0;
    long size = 5 * pow(10,4);
    int nums[size];
    int num; 

    // read from array
    for(int i = 0; i < pow(10,5); i++){
        for (int j = 0; j < size; j ++){
             num = nums[j];    
        }
    }

    // write down on the array 
    for(int i = 0; i < pow(10,5); i++){
        for (int j = 0; j < size; j ++){
            nums[j] = j;
        }
    }

    clock_t final_time = clock();

    time_taken += (double)(final_time - initial_time) / CLOCKS_PER_SEC;

    printf("Benchmark time for the memory operation is: %lf s", time_taken);


    return 0;

}









