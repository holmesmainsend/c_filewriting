#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fPointer = fopen("employees.txt", "a");

    

    fclose(fPointer);
    return 0;
}