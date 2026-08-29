//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main(){

    int n, temp = 0, s = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n != 0){

        temp = n%10;
        s += temp;
        n /= 10;

    }

    printf("Sum of all digits = %d", s);

}