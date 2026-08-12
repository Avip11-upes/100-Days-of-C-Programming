//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
void main(){
    float n1, n2;
    printf("Give two numbers : ");
    scanf("%f%f", &n1, &n2);
    printf("Sum is %f\n",n1 + n2);
    printf("Difference is %f\n", n1 - n2);
    printf("Product is %f\n", n1*n2);
    printf("Quotient is %f\n", n1/n2);
}