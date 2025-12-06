#include <stdio.h>

void flushbuf(FILE *fp) {
    int c;
    while ((c = fgetc(fp)) != EOF) { }
}

void myfflush(FILE *fp) {
    if (fp != NULL) {
        flushbuf(fp);
    }
}

void myfclose(FILE *fp) {
    if (fp != NULL) {
        myfflush(fp);
        fclose(fp);
    }
}

int main() {
    FILE *fp1, *fp2;

    fp1 = fopen("test1.txt", "w+");
    fp2 = fopen("test2.txt", "w+");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error creating files.\n");
        return 1;
    }

    fprintf(fp1, "This is test file 1.\n");
    fprintf(fp2, "This is test file 2.\n");

    myfflush(fp1);
    myfflush(fp2);

    fprintf(fp1, "Adding more data to file 1 after flush.\n");
    fprintf(fp2, "Adding more data to file 2 after flush.\n");

    myfclose(fp1);
    myfclose(fp2);

    printf("Test files created and flushed successfully.\n");

    return 0;
}

