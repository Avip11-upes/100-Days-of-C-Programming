//Check if a matrix is symmetric.
// Check if a matrix is symmetric.
#include <stdio.h>

void main(){

    int r, c;

    printf("Enter no. of rows and columns : ");
    scanf("%d %d", &r, &c);

    if (r != c){
        printf("Not symmetric");
    }

    int m1[r][c], m2[c][r];
    int temp = 0;

    printf("Enter elements : ");

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            m2[j][i] = m1[i][j];
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (m1[i][j] == m2[i][j]){
                temp++;
            }
        }
    }

    if (temp == r * c){
        printf("Symmetric");
    }
    else{
        printf("Not symmetric");
    }

}

