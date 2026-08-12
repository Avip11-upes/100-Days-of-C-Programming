//Write a program to swap two numbers using a third variable.
#include <stdio.h>
void main(){
    int a, b, c;
    printf("Enter values of a and b : ");
    scanf("%d%d", &a, &b);
    printf("Values of a and b given by user : a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("Values of a and b after swapping : a = %d, b = %d\n", a, b);
}
