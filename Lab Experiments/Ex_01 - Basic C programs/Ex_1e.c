// Write a C program to find the frequency of each character in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    printf("Character Frequency:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != '\n') { 
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}