#include <stdio.h>

int main() {
    int a, i;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 2) {
        printf("Not prime\n");
        return 0;
    }

    for (i = 2; i < a; i++)
        if (a % i == 0)
            break;

    if (i == a)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
