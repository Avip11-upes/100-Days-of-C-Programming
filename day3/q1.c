//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
void main(){
    float c;
    printf("Enter temperature in celsius : ");
    scanf("%f", &c);
    printf("Temperature in farenheit is %f\n",((9.0/5.0)*c)+32);
}
