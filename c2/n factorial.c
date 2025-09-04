#include <stdio.h>

int main()
{
    int i, t, a ,b;
    scanf("%d", &t);
     a = 1;
     b=1;

    for(i = 1; i <= t; i++)
    {
        b=(a)*(b);
        printf("%d\n", b);
        a++;
    }

    return 0;
}
