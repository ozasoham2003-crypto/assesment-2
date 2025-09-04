#include <stdio.h>

int main() {
    int a, b, c = 0, d;

    for (a = 2; a <= 500; a++) {
        d = 1;
        for (b = 2; b < a; b++) {
            if (a % b == 0) {
                d = 0;
                break;
            }
        }
        if (d)
            c++;
    }

    printf("Number of prime numbers between 1 and 500 is: %d\n", c);

    return 0;
}
