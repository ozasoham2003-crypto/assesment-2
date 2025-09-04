#include <stdio.h>

int main() {
    int n, i;
    float number, sum = 0.0, mean;


    printf("Enter how many numbers: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum += number;
    }


    mean = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}
