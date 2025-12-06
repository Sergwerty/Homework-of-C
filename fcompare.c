#include <stdio.h>
#include <string.h>

int main() {
    FILE *file1, *file2;
    char line1[1000], line2[1000];
    int lineNumber = 1;

    // Create first example file
    file1 = fopen("file1.txt", "w");
    if (file1 == NULL) {
        printf("Error creating file1.\n");
        return 1;
    }
    fprintf(file1, "Hello\nThis is file one\nIt has some text\nEnd of file\n");
    fclose(file1);

    // Create second example file
    file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        printf("Error creating file2.\n");
        return 1;
    }
    fprintf(file2, "Hello\nThis is file two\nIt has some text\nEnd of file\n");
    fclose(file2);

    // Open files for reading
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while (fgets(line1, sizeof(line1), file1) != NULL &&
           fgets(line2, sizeof(line2), file2) != NULL) {
        if (strcmp(line1, line2) != 0) {
            printf("Files differ at line %d:\n", lineNumber);
            printf("File1: %s", line1);
            printf("File2: %s", line2);
            fclose(file1);
            fclose(file2);
            return 0;
        }
        lineNumber++;
    }

    if (fgets(line1, sizeof(line1), file1) != NULL ||
        fgets(line2, sizeof(line2), file2) != NULL) {
        printf("Files differ at line %d (one file has extra lines).\n", lineNumber);
    } else {
        printf("Files are identical.\n");
    }

    fclose(file1);
    fclose(file2);
    return 0;
}


