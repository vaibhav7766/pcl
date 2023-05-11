#include <stdio.h>
#include <math.h>
int count_digits(int n){
    int count=0;
    while(n){
        n=n/10;
        count++;
    }
    return count;
}

int armstrong(int n){
    int temp,rev=0,count=count_digits(n);
    while(n){
        temp=n%10;
        rev=rev+pow(temp,count);
        n=n/10;
    }
    return rev;
}
int main(){
    int min,max;
    printf("Enter minimum and maximum number: ");
    scanf("%d %d",&min,&max);
    for(int i=min;i<=max;i++){
        if(i==armstrong(i)){
            printf("%d\t",i);
        }
    }
    return 0;
}