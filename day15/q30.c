//Write a program to reverse a given number.
#include <stdio.h>

int main(){

    int n, rev = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    while(n!=0){

        int s = n%10;
        rev = rev *10 + s;
        n = n/10;

    }

    printf("reverse is %d", rev);

}
