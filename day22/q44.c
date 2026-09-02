//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

void main() {

    int n;
    float s = 0;

    printf("Enter number of terms : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        int a = 2 * i - 1;
        int b;

        if (i == 1)
        b = 1;
        else
        b = 2 * i;

        s += (float)a / b;

    }

    printf("Sum = %f", s);

}

