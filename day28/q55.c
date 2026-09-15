//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

void main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++){
        int s = 0;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                s += 1;
            }
        }
        if (s == 0){
            printf("%d is prime\n", i);
        }

    }

}

