//Write a program to check if a number is prime.
#include <stdio.h>

int main(){

    int n, s = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 2; i<n; i++){

        if (n%i == 0){
            s += 1;
            printf("%d\n", s);
        }

    }

    if(s == 0){
        printf("Prime");
    }
    else{
        printf("Composite");
    }

}
