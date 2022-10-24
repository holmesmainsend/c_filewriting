#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fPointer = fopen("employees.txt", "w");

    fclose(fPointer);
    return 0;
}