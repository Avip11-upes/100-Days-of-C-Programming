//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {

    int r, c, sum;

    printf("Enter no. of rows and columns : ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int s[r];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {

        sum = 0;

        for (int j = 0; j < c; j++) {
            sum += a[i][j];
        }

        s[i] = sum;
    }

    for (int i = 0; i < r; i++) {
        printf("%d, ", s[i]);
    }

    return 0;
}