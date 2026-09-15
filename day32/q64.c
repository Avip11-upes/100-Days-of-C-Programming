//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {

    int n, digit;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {

        digit = n % 10;
        freq[digit]++;

        n = n / 10;
    }

    int max = freq[0];
    int most = 0;

    for (int i = 1; i < 10; i++) {

        if (freq[i] > max) {
            max = freq[i];
            most = i;
        }
    }

    printf("Most occurring digit = %d\n", most);
    printf("It occurs %d times.", max);

    return 0;
}

