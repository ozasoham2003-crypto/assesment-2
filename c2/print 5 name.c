#include <stdio.h>

int main() {
    int n, i = 1;
    char name[50];


    printf("Enter your name: ");
    scanf("%s", name);


    printf("How many times to print your name? ");
    scanf("%d", &n);


    while (i <= n) {
        printf("%d. %s\n", i, name);
        i++;
    }

    return 0;
}
