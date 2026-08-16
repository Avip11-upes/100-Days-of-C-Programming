//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
void main(){
    char s;
    int a = 0;
    char arr[] = "aeiou";
    printf("enter a letter : ");
    scanf("%c", &s);
    for (int i = 0; arr[i] != 0; i++){
        if(s == arr[i]){
            a = a + 1;
        }
    }
    if (a > 0){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
}
