#include <stdio.h>

int main() {
    // Character array :- Input large Character .
    // [50] means the array  can store 50 Char.
    char name[50];

    printf("Enter your full name: ");                // fgets() used to take large character Input
    fgets(name, sizeof(name), stdin);               // %s is used to print a string stored in the 'name' array.
    printf("My name is %s", name)  ;               // name: store input in name Variable
                                                  // sizeof(name): it can store of 50 Char
                                                 // stdin Means "Standard Input".
                                                // %s is used to print a string stored in the 'name' array.
    return 0;
}