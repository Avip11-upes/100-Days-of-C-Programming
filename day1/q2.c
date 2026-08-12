//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
void main(){
    float a, b;
    printf("Enter two numbers : ");
    scanf("%f%f", &a, &b);
    printf("Sum is : %f\n", a+b);
    printf("Difference is : %f\n", a-b);
    printf("Product is : %f\n", a*b);
    printf("Quotient is : %f\n", a/b);
}
