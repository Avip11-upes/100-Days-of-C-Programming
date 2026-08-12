//Write a program to input two numbers and display their sum.
#include <stdio.h>
void main(){
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    printf("Sum of %d and %d is %d", a, b, a+b);
}