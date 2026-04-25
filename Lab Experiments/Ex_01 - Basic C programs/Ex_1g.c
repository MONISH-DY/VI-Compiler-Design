// Write a C program to count digits, alphabets, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, digits = 0, alphabets = 0, special = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];

        if ((ch >= '0' && ch <= '9'))
            digits++;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            alphabets++;
        else if (ch != ' ' && ch != '\n')
            special++;

        i++;
    }

    printf("Alphabets = %d\nDigits = %d\nSpecial = %d\n",
           alphabets, digits, special);

    return 0;
}