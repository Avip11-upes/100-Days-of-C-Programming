//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b;
    int arr1[100], arr2[100];
    int count1 = 0, count2 = 0;
    int hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d, %d", &a, &b);

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            arr1[count1] = i;
            count1++;
        }
    }

    for (int i = 1; i <= b; i++) {
        if (b % i == 0) {
            arr2[count2] = i;
            count2++;
        }
    }

    for (int i = 0; i < count1; i++) {
        for (int j = 0; j < count2; j++) {
            if (arr1[i] == arr2[j]) {
                hcf = arr1[i];
            }
        }
    }

    printf("HCF = %d\n", hcf);

}