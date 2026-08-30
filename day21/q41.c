//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <string.h>

int main(){

    char num[100], d1, dl, revnum[100];
    int temp, len = 0;

    printf("Enter a number : ");
    scanf("%s", &num);

    len = strlen(num);
    d1 = num[0];
    dl = num[len - 1];

    num [len - 1] = d1;
    num [0] = dl;

    printf("%s", num);

}
