//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
void main(){
    int a, b;
    printf("Give two numbers : ");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping : %d, %d", a, b);
}
