//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main(){

    int n, rev = 0, temp;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (n != 0){
        int s = n%10;
        rev = rev*10 + s;
        n = n/10;
    }

    if(rev == temp){
        printf("Palindrome");
    }

    else{
        printf("Not a palindrome");
    }

}