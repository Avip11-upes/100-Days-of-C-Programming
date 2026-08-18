//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, x1, x2;

    printf("Enter a, b, c of a quadratic equation : ");
    scanf("%lf, %lf, %lf", &a, &b, &c);

    double d = pow(b, 2) - (4*a*c);

    x1 = ((-b) + pow(d, 0.5))/(2*a);
    x2 = ((-b) - pow(d, 0.5))/(2*a);

    if(d > 0){
        printf("Roots are real and distinct\n");
        printf("%lf, %lf", x1, x2);
    }
    else if(d == 0){
        printf("Roots are real and equal\n");
        printf("%lf", x1);
    }
    else if(d < 0){
        printf("Roots are imaginary\n");
    }

}
