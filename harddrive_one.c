#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
int main() {
    clock_t initial time = clock();
    double total_time_taken; 

    // write file
    int seekByte = 100;
    long long int totalBytes = 0;

    FILE *fp = fopen("file1.txt", "w");
    while (totalBytes < pow(10, 9)){
    fseek(fp, seekByte - 1, SEEK_CUR);
    fputc('\0', fp);
    totalBytes += seekByte;}

    fclose(fp);
    char str[100];
    fp = fopen("file1.txt", "r");

    totalBytes = 0;
    //read file 
    while(totalBytes < pow(10, 9)) {
        fgets(str, 100, fp);
        fseek(fp, seekByte , SEEK_CUR);
        totalBytes += seekByte;
    }
    fclose(fp);



    


    return 0;
}