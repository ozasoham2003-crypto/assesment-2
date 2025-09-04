#include <stdio.h>

int main() {
    int number, digit,a;
    a=0;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("sum of digit is:\n");

    while (number > 0) {
        digit = number % 10;

        number = number / 10;
        a=a+digit;
    }
printf("%d\n", a);
    return 0;
}
