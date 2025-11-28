#include <stdio.h>

int main() {
    FILE *file1, *file2, *mergedFile;
    char line[200];

    // Open the first input file
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.txt\n");
        return 1;
    }

    // Open the second input file
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2.txt\n");
        fclose(file1);
        return 1;
    }

    // Open the output (merged) file
    mergedFile = fopen("merged.txt", "w");
    if (mergedFile == NULL) {
        printf("Error creating merged.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Copy contents of file1 to merged file
    while (fgets(line, sizeof(line), file1) != NULL) {
        fprintf(mergedFile, "%s", line);
    }

    // Copy contents of file2 to merged file
    while (fgets(line, sizeof(line), file2) != NULL) {
        fprintf(mergedFile, "%s", line);
    }

    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    printf("Files merged successfully into merged.txt\n");

    return 0;
}
