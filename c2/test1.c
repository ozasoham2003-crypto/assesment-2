#include <stdio.h>

int main() {
    int number, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Digits of the number are:\n");

    while (number > 0) {
        digit = number % 10;
        printf("%d\n", digit);
        number = number / 10;
    }

    return 0;
}



