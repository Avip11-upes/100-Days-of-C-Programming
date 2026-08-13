//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
void main(){
    int i, n, s;
    s = 0;
    printf("Enter no. of natural numbers : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        s = s+i;
    }
    printf("Sum of first %d natural numbers is %d", n, s);
}
