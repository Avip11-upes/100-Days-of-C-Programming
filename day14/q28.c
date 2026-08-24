//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main(){

    int n, s = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("(");

    for (int i = 2; i <= n; i+=2){

        s *= i;
        printf("%d,",i);

    }

    printf(")\n");

    printf("Product = %d", s);

}
