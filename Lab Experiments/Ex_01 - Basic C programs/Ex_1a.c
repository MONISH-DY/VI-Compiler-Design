// Write a C program to find the length of a string without using strlen().

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length = %d\n", i - 1);
    return 0;
}