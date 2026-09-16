//Add two matrices.
#include <stdio.h>

void main(){

    int r, c;

    printf("Enter rows and columns for both matrices (order will be same for both to be added) : ");
    scanf("%d %d", &r, &c);

    int m1[r][c], m2[r][c], sum[r][c];

    printf("Enter elements for m1 : ");

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements for m2 : ");

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("\nAdding both will give : \n");

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }


}

