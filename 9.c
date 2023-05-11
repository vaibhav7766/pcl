#include <stdio.h>
int length(char arr1[]){
    int i=0,count=0;
    while(arr1[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int characters(char arr1[]){
    int i=0,count=0;
    while(arr1[i]!='\0'){
        if(arr1[i]==' '){
            i++;
        }
        else{
            count++;
            i++;
        }
    }
    return count;
}
int vowels(char arr1[]){
    int count=0;
    for(int i=0;arr1[i]!='\0';i++){
        if(arr1[i]=='a'||arr1[i]=='A'||arr1[i]=='e'||arr1[i]=='E'||arr1[i]=='i'||
        arr1[i]=='I'||arr1[i]=='o'||arr1[i]=='O'||arr1[i]=='u'||arr1[i]=='U'){
            count++;
        }
    }
    return count;
}
void copy(char arr1[]){
    char new[100];
    for(int i=0; arr1[i]!='\0';i++){
        new[i] = arr1[i];
    }
    printf("%s", new);
}
int main(){
    char s[100];
    printf("Enter a string: ");
    gets(s);
    printf("Length of the string is %d",length(s));
    printf("\nNumber of characters in string: %d",characters(s));
    printf("\nNumber of vowels in string: %d",vowels(s));
    printf("\n");
    copy(s);
    return 0;
}