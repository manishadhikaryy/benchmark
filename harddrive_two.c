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




    return 0;
}