/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>

int main(){

    int day, fine;
    fine = 0;

    printf("Enter the number of days : ");
    scanf("%d", &day);

    if (day >= 1 && day <= 5){
        fine = fine + (2*day);
        printf("fine = %d", fine);
    }

    else if (day > 5 && day <= 10){
        fine = 10 + (4 * (day - 5));
        printf("fine = %d", fine);
    }

    else if (day > 10 && day <= 30){
        fine = 30 + (6 * (day - 10));
        printf("fine = %d", fine);
    }

    else if (day > 30){
        printf("Membership cancelled");
    }

}
