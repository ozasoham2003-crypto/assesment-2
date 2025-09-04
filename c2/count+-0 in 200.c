#include <stdio.h>

int main() {
    int num;
    int pos = 0, neg = 0, zero = 0;

    printf("Enter 200 numbers:\n");

    for (int i = 1; i <= 200; i++) {
        printf("Num %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    printf("\nResults:\n");
    printf("Positives: %d\n", pos);
    printf("Negatives: %d\n", neg);
    printf("Zeros: %d\n", zero);

    return 0;
}

