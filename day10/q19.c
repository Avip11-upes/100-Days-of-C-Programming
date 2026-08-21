//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main(){

    double a, b, c;

    printf("Enter the sides of triangle : ");
    scanf("%lf, %lf, %lf", &a, &b, &c);

    if (a+b>c && a+c>b && b+c>a){

        if (a == b && a == c){
            printf("Equilateral");
        }

        else if ((a == b && a != c) || (b == c && b != a)){
            printf("Isoceles");
        }

        else if (a != b && b != c && c != a){
            printf("Scalene");
        }
        
    }

    else{
        printf("It is not a possible triangle");
    }

}