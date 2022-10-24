#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fPointer = fopen("employees.txt", "a");

    fprintf(fPointer, "Kayla, HR");

    fclose(fPointer);
    return 0;
}