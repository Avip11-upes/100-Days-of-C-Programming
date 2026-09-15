//Find the sum of array elements.
#include <stdio.h>

void main(){

    int n, s = 0;

    printf("Enter length of array : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++){
        s += a[i];
    }

    printf("Sum = %d", s);

}

