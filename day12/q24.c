/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>

int main(){

    int unit, bill;
    bill = 0;

    printf("Enter units : ");
    scanf("%d", &unit);

    if (unit >=1 && unit <= 100){
        bill = bill + (5*unit);
    }

    else if (unit > 100 && unit <= 200){
        bill = 500 + (7*(unit - 100));
    }

    else if (unit > 200 && unit <= 300){
        bill = 500 + 700 + (10*(unit - 200));
    }

    else if (unit > 300){
        bill = 12*unit;
    }

    printf("Bill = %d", bill);

}