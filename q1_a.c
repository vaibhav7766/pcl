#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d;
    scanf("%f %f %f",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    if(d<0){
        printf("Equation have imaginary roots.");
    }
    else if(d==0){
        printf("Equation have real and equal roots.");
        printf("\n");
        float x=(float) (-1*b)/(2*a);
        printf("%f",x);
    }
    else{
        printf("Equation have real and distinct roots");
        printf("\n");
        float x1=(float) (-1*b+d)/(2*a);
        float x2=(float) (-1*b-d)/(2*a);
        printf("%f and %f",x1,x2);
    }
    return 0;
}