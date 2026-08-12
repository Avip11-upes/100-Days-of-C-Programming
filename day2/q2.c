//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
void main(){
    float r;
    float pi = 3.141592;
    printf("Enter radius : ");
    scanf("%f", &r);
    if (r >= 0){
        printf("Area = %f\n", pi*r*r);
        printf("Circumference = %f\n", 2*pi*r);
    }
    else{
        printf("Radius can not be negative");
    }
}
