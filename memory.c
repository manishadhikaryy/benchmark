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


