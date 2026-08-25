//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main(){

    int n, bin[50], i = 0, temp;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (n != 0){
        bin[i] = n%2;
        n = n/2;
        i++;
    }

    printf("Binary of %d is : ", temp);

    for (int j = i-1; j >= 0; j--){
        printf("%d", bin[j]);
    }

}