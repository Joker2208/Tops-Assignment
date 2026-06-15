#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error");
        return 1;
    }
    fprintf(fp, "Hello");
    fclose(fp);
    printf("Done");
    return 0;
}