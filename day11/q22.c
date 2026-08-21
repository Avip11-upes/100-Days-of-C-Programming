//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main(){

    double cp, sp;

    printf("Enter cp and sp : ");
    scanf("%lf, %lf", &cp, &sp);

    if (sp > cp){
        double a = (sp - cp)/cp;
        double profit = a * 100;
        printf("Profit = %lf percent", profit);
    }

    else if (cp > sp){
        double a = (cp - sp)/cp;
        double loss = a * 100;
        printf("Loss = %lf percent", loss);
    }

    else if (cp == sp){
        printf("No profit or loss");
    }

}
