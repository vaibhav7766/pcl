#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float m;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=(float) sqrt(n);
    printf("\nThe square root of %d is %f",n,m);
    
    return 0;
}