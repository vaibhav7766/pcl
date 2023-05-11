#include <stdio.h>

int main(){
    int t1=0;int t2=1;int t3,n;
    int i=1;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d\t%d",t1,t2);
    t3=t1+t2;
    while(i<=n-2){
        printf("\t%d",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
        i++;
    }

    return 0;
}
