//Delete an element from an array.
#include <stdio.h>

int main() {

    int n, element, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {

        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion: ");

        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("Element not found");
    }

    return 0;
}

