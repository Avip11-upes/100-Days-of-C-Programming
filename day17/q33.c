//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main(){

    int n, temp = 0, s = 0, n_, n2, digits = 0;

    printf("Enter number : ");
    scanf("%d", &n);
    n_ = n;
    n2 = n;

    while (n2!=0){
        n2/=10;
        digits++;
    }

    while (n != 0){
        temp = n%10;
        s += (int)round(pow(temp, digits));
        n = n/10;
    }

    if (s == n_){
        printf("%d is an armstrong number", n_);
    }

    else{
        printf("%d is not an armstrong number", n_);
    }

}
