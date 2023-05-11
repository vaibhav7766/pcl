#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    float arr[10];
    printf("\nEnter elements: ");
    for(int h=0; h<n; h++){
        scanf("%f",&arr[h]);
    }
    float sn,mean,temp=0,min=arr[0],max=arr[0];
    for(int i=0;i<n;i++){
        sn+=arr[i];
    }
    mean=sn/10;
    for(int j=0;j<n;j++){
        temp+=pow(arr[j]-mean,2);
    }
    float std=sqrt(temp/10);
    float var=pow(std,2);
    for(int k=0;k<n;k++){
        if(min>arr[k]){
            min=arr[k];
        }
    }
    for(int l=0;l<n;l++){
        if(max<arr[l]){
            max=arr[l];
        }
    }
    printf("Standard deviation of array is: %f",std);
    printf("\nVariance of array is: %f",var);
    printf("\nMaximum element of array is: %f",max);
    printf("\nMinimum element of array is: %f",min);
    return 0;
}