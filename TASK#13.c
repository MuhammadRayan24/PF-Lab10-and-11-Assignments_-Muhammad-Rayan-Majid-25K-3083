#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *fp;
    char buffer[100];

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fclose(fp);
    printf("File contents deleted successfully.\n");

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    if (fgets(buffer, sizeof(buffer), fp) == NULL) {
        printf("Confirmation: File is EMPTY.\n");
    } else {
        printf("File NOT empty! It has some text.\n");
    }

    fclose(fp);
    return 0;
}
