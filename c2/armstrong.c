#include <stdio.h>

int main() {
    int a, b, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &a);

    temp = a;

    while (temp > 0) {
        b = temp % 10;
        sum += b * b * b;
        temp /= 10;
    }

    if (sum == a)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
