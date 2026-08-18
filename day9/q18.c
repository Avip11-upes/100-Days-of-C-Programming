/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include <stdio.h>

int main(){
    float n;

    printf("Enter marks : ");
    scanf("%f", &n);

    if(n <= 100 && n >= 90){
        printf("Grade A");
    }
    else if(n <= 89 && n >= 80){
        printf("Grade B");
    }
    else if(n <= 79 && n >= 70){
        printf("Grade C");
    }
    else if(n <= 69 && n >= 60){
        printf("Grade D");
    }
    else if(n < 60){
        printf("Fail");
    }
    else{
        printf("Enter valid marks");
    }
}
