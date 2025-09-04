#include <stdio.h>

int main() {
    int a, b, c = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (b = 1; b <= a / 2; b++) {
        if (a % b == 0) {
            c += b;
        }
    }

    if (c == a)
        printf("%d is a Perfect Number\n", a);
    else
        printf("%d is NOT a Perfect Number\n", a);

    return 0;
}
