//Read and print elements of a one-dimensional array.
#include <stdio.h>

void main(){

    int n;

    printf("Enter length of array : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++){
        printf("%d, ", a[i]);
    }

}

