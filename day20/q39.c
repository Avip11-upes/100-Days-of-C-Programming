//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main(){

    int n, temp = 0, s = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n != 0){

        temp = n%10;

        if (temp%2 != 0){
            s *= temp;
        }

        n /= 10;

    }

    printf("Product of odd digits = %d", s);

}
