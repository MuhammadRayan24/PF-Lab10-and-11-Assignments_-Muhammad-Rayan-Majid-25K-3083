#include <stdio.h>
#include <string.h>
int main() 
{
    FILE *fp;
    char line[200];

    int characters = 0, words = 0, lines = 0;
    int inWord;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    // Read file line by line
    while (fgets(line, sizeof(line), fp) != NULL) {
        lines++;

        int len = strlen(line);
        characters += len;

        inWord = 0;
        for (int i = 0; i < len; i++) 
        {
            if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n') 
            {
                if (inWord == 0) {  
                    words++;      
                    inWord = 1;
                }

            } else {
                inWord = 0;      
            }
        }
    }
    fclose(fp);
    printf("\n=== File Statistics ===\n");
    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
