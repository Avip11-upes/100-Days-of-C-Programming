//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main(){

    int a, b, o;

    printf("1) +\n2) -\n3) *\n4) /\n5) %");
    printf("Enter two numbers and the operator(1-5) : ");
    scanf("%d, %d, %d", &a, &b, &o);

    switch (o){

        case 1:
        printf("result = %d", a + b);
        break;

        case 2:
        printf("result = %d", a - b);
        break;

        case 3:
        printf("result = %d", a * b);
        break;

        case 4:
        printf("result = %f", (float)a/b);
        break;

        case 5:
        printf("result = %d", a%b);

    }

}
