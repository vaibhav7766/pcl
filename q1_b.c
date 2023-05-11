#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    printf("Enter any string: ");
    scanf("%s", s);
    strlwr(s);
    printf("%s", s);

    return 0;
}
