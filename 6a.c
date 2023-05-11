#include <stdio.h>

int main(){
    int arr[10000];
    int size,count=0,guess;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter element: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter a number which you want to find: ");
    scanf("%d",&guess);
    for(int j=0;j<size;j++){
        if(guess==arr[j]){
            count++;
        }
    }
    if(count==0){
        printf("\nElement not found");
        printf("\nElement occurs 0 times");
    }
    else{
        printf("\nElement found");
        printf("\nElement occurs %d times",count);
    }
    return 0;
}