#include <stdio.h>

int main() {
    int a, b, c = 0, d;

    printf("Enter a number: ");
    scanf("%d", &a);

    d = a;

    while (a > 0) {
        b = a % 10;
        c = c * 10 + b;
        a = a / 10;
    }

    if (c == d)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
