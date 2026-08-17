//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
#include <ctype.h>

void main(){

    char s;

    printf("Enter a letter : ");
    scanf("%c", &s);

    if (isalpha(s)){
        if(isupper(s)){
            printf("Uppercase letter");
        }
        else{
            printf("Lowercase letter");
        }
    }

    else if (isdigit(s)){
        printf("Number");
    }

    else{
        printf("Special character");
    }
}
