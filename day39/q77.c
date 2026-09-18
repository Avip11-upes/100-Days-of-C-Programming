// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {

    int r, c, distinct = 1;

    printf("Enter no. of rows and columns : ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements :\n");

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r && i < c; i++) {
        for (int j = i + 1; j < r && j < c; j++) {

            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0) {
            break;
        }
    }

    if (distinct == 1) {
        printf("Diagonal elements are distinct");
    }
    else {
        printf("Diagonal elements are not distinct");
    }

    return 0;
}