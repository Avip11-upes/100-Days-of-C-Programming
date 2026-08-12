//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
void main(){
    float l, b;
    printf("Enter length and breadth : ");
    scanf("%f%f", &l, &b);
    if (l >= 0 && b >= 0){
        printf("Area is %f\n", l*b);
        printf("Perimeter is %f\n", l+b);
    }
    else{
        printf("Length or Breadth can not be negative");
    }
}
