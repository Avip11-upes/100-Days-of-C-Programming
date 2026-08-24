//Write a program to calculate the factorial of a number.
#include <stdio.h>

long long fact(int n){

    if (n == 1 || n == 0){
        return 1;
    }

    else{
        return n * fact(n-1);
    }

}

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Factorial of %d is %d", n, fact(n));

}

