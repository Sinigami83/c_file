#include <stdio.h>

int main()
{
    int a, b, x;
    int max;
    int i;
    /*scanf("%d %d", &a, &b);*/

    a = b = x = 5;
    printf("%d %d\n", a, b);

    printf("%d %d %d\n", ++a, --b, x += 5);

    max = a > b ? a : b;

    printf("%d\n", max);

    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    printf("%d\n", max);

    switch (a < b) {
    case 4:
        printf("%d\n", a);
        break;
    case 6:
        printf("%d\n", b);
        break;
    default:
        printf("Error");
        break;
    }

    while (a >= b) {
        ++b;
        printf("%d\t", b);
    }
    printf("\n", b);

    printf("Table\n");

    for (i = 0; i <= 25; i++)
        printf("%d x %d\t = %d\n", i, i, i * i);
    return 0;
}