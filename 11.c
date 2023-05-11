#include <stdio.h>
int length(char s[]){
    int i,count=0;
    while(s[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int main(){
    char s1[50],s2[50],s3[100],subs[50];
    int i=0,j=0,found=0;
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    printf("Enter a substring to find in string 1: ");
    gets(subs);
    for(i=0;s1[i]!='\0';i++){
        s3[i]=s1[i];
    }
    for(j=0;s2[j]!='\0';j++){
        s3[i+j]=s2[j];
    }
    printf("Concatenated string is : %s\n",s3);
    for(i=0;i<length(s1)-length(subs);i++){
        for(j=0;j<length(subs);j++){
            if(s1[i+j]!=subs[j]){
                break;
            }
        }
        if(j==length(subs)){
            printf("Substring found\n");
            found=1;
            break;
        }
    }
    if(!found){
        printf("Substring not found\n");
    }
    if(length(s1)>length(subs)){
        printf("First string is longer than second string.");
    }
    else if(length(s1)<length(subs)){
        printf("Second string is longer than first string.");
    }
    else{
        printf("Both strings are equal in length.");
    }
}