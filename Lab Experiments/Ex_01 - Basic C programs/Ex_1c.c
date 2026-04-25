// Write a C program to reverse a string without using inbuilt functions.

#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, len = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0') len++;

    for (i = len - 2; i >= 0; i--) {
        rev[len - 2 - i] = str[i];
    }
    rev[len - 1] = '\0';

    printf("Reversed string: %s", rev);
    return 0;
}