#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fPointer = fopen("employees.txt", "w");

    fprintf(fPointer, "Jeff, Receptionist\nMarta, Clerk\nBill, Cashier\n");

    fclose(fPointer);
    return 0;
}