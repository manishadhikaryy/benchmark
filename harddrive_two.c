#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    clock_t initial_time = clock(); /* get starting time */
    double time_taken = 0.0;

    int seekByte = 10000;
    long long int totalBytes = 0;

    FILE *fp = fopen("file2.txt", "w");

   // write file into every 10000 bytes   
    while (totalBytes < pow(10, 9)){
        fseek(fp, seekByte - 1 , SEEK_CUR);
        fputc('\0', fp);
        totalBytes += seekByte;
    }
    fclose(fp);

    // read file every 10000 bytes
    char str[seekByte];
    fp = fopen("file2.txt", "r");
    totalBytes = 0;

    // read from file2.txt every 10000 bytes
    while(totalBytes < pow(10, 9)) {
        fgets(str, seekByte, fp);
        fseek(fp, seekByte, SEEK_CUR);
        totalBytes += seekByte;
    }

    clock_t final_time = clock();
    time_taken += (double)(final_time - initial_time) / CLOCKS_PER_SEC;
    // display final result
    printf("Benchmark time for the harddrive_two operation is: %lf s", time_taken);
    return 0;
}