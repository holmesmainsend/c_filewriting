#include <stdio.h>
#include <stdlib.h>

int main() {
    char line1[255];
    char line2[255];
    char line3[255];
    char line4[255];
    FILE *fPointer = fopen("employees.txt", "r");

    fgets(line1, 255, fPointer);
    printf("%s\n", line1);
    fgets(line2, 255, fPointer);
    printf("%s\n", line2);
    fgets(line3, 255, fPointer);
    printf("%s\n", line3);
    fgets(line4, 255, fPointer);
    printf("%s\n", line4);

    fclose(fPointer);
    return 0;
}