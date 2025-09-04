#include <stdio.h>

int main() {
    int a, b, c;


    printf("Enter number 1: ");
    scanf("%d", &c);

    a = b = c;


    for (int i = 2; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &c);

        if (c > a) {
            a = c;
        }

        if (c < b) {
             b= c;
        }
    }
    printf("\nLargest number: %d\n", a);
    printf("Smallest number: %d\n", b);

    return 0;
}

