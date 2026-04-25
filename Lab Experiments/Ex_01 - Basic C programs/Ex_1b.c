// Write a C program to copy one string to another without using strcpy().

#include <stdio.h>

int main() {
    char src[100], dest[100];
    int i = 0;

    printf("Enter string: ");
    fgets(src, sizeof(src), stdin);

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    printf("Copied string: %s", dest);
    return 0;
}