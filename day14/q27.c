//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main(){

    int n;
    int s = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= (2*n); i += 2){

        printf("%d\n", i);
        s = s + i;

    }

    printf("Sum of first %d numbers is %d", n, s);

}
