#include <stdio.h>
#include <string.h>
int equal(char str1[100], char str2[100]) {
    if (strcmp(str1, str2) == 0) {
        return 1;
    } else {
        return 0;
    }
}
void reverse(char str1[100], char reversed[100]) {
    int j = strlen(str1) - 1;
    for (int i = 0; i < strlen(str1); i++) {
        reversed[i] = str1[j];
        j--;
    }
    reversed[strlen(str1)] = '\0';
}
int palindrome(char str1[100]) {
    char reversed[100];
    reverse(str1, reversed);

    if (equal(reversed, str1) == 1) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    if (palindrome(str) == 1) {
        printf("Given string is a palindrome.\n");
    } else {
        printf("Given string is not a palindrome.\n");
    }
    return 0;
}