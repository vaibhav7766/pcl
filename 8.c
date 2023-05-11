#include <stdio.h>
int main() {
    int arr1[50][50], arr2[50][50], sum[50][50], diff[50][50], Trans[50][50], r, c, i, j;
    printf("Enter the number of rows and columns of both the matrix: \n");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("First matrix: \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr1[i][j]);  
        }
        printf("\n");
    }
    printf("Second matrix: \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of entered matrices:\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    printf("Difference of entered matrices:\n");
    for(i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
            diff[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of first matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            Trans[i][j] = arr1[j][i];
            printf("%d\t", Trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}