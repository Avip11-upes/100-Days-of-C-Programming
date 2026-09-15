//Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int main() {

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = INT_MIN;

    for (int i = 1; i < n; i++) {

        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }

        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("No second largest element");
    }
    else {
        printf("Second largest element = %d", second);
    }

    return 0;
}