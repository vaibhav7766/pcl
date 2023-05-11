#include <stdio.h>
int main(){
    int n1, n2, arr1[50], arr2[50], un[100], t=0;
    printf("Enter size of array 1: ");
    scanf("%d",&n1);
    printf("Enter elements of array 1: ");
    for(int i=0; i<n1; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of array 2: ");
    scanf("%d",&n2);
    printf("Enter elements of array 2: ");
    for(int j=0; j<n2; j++){
        scanf("%d",&arr2[j]);
    }
    for(int k=0; k<n1; k++){
        un[t]=arr1[k];
        t++;
    }
    for(int l=0; l<n2; l++){
        un[t]=arr2[l];
        t++;
    }
    printf("Union of given arrays is: ");
    for(int m=0; m<t; m++){
        printf("%d ",un[m]);
    }
    return 0;
}