#include <stdio.h>

int main(){
    int n,sn=0,prod=1;
    printf("Enter any positive integer: ");
    scanf("%d",&n);
    int dup=n;
    while(dup!=0){
        int temp=dup%10;
        sn+=temp;
        prod*=temp;
        dup=dup/10;
    }
    if(sn==prod){
        printf("\n%d is a Spy number.",n);
    }
    else{
        printf("\n%d is not a Spy number.",n);
    }
}