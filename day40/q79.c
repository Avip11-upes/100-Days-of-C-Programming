// Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {

    int r, c;

    printf("Enter no. of rows and columns : ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements :\n");

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int k = 0; k < c; k++) {

        int i = 0;
        int j = k;

        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    for (int k = 1; k < r; k++) {

        int i = k;
        int j = c - 1;

        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
