//Write a program to check if a number is a strong number.
#include <stdio.h>

long long fact(int x){

    if (x == 0 || x == 1)
    return 1;
    else
    return x * fact(x-1);

}

void main(){

    int n, temp = 0, s = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    int n_ = n;

    while (n != 0){
        temp = n%10;
        n /= 10;
        s += fact(temp);
    }

    if (s == n_)
    printf("Strong number");
    else
    printf("Not a strong number");

}
