#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    char *dot = strchr(str, '.');
    char *comma = strrchr(str, ';');

    int start = dot - str + 1;
    int end = comma - str;
    int length = end - start;

    char newStr[length + 1];
    strncpy(newStr, str + start, length);
    newStr[length] = '\0';

    printf("New String: %s", newStr);
    return 0;
}
