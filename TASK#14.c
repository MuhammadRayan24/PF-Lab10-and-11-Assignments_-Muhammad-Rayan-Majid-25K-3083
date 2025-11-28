#include <stdio.h>
#include <time.h>
int main() 
{
    FILE *fp;
    time_t now;
    char *timestamp;

    fp = fopen("log.txt", "a");
    if (fp == NULL) {
        printf("Error opening log file.\n");
        return 1;
    }

    time(&now);
    timestamp = ctime(&now);   

    fprintf(fp, "Program executed at: %s", timestamp);

    fclose(fp);

    printf("Timestamp added to log.txt\n");

    return 0;
}
