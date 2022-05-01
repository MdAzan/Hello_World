#include <stdio.h>


int main() {
    // pointers
    int Number = 5000;
    // print The Number
    printf("The number is = %d\n", Number);
    // Address of the Number in memory
    int *address_of_number = &Number;
    printf("The address of the number is = %u\n", address_of_number);
    // Find out what data is stored on this(address_of_number) address
    int finding_data_by_address = *address_of_number;
    printf("stored data on addrees_of_number variable is = %d\n", finding_data_by_address); // by a variable
    printf("stored data on addrees_of_number variable is = %d\n", *address_of_number); // without variable

    return 0;
}