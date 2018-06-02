#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void p5_1()
{
    int i, a;
    a = 1;
    for (i = 1; i <= 10; i++)
        a *= i;
    printf("%d\n", a);

    i = a = 1;
    while (i <= 10) {
        a *= i;
        i++;
    }
    printf("%d\n", a);

    i = a = 1;
    do {
        a *= i;
        i++;
    } while (i <= 10);
    printf("%d\n", a);
}

void p5_6()
{
    int a, b, i;
    scanf("%d", &a);
    b = a;
    for (b = a, i = 0; b > 0; b /= 10, i++)
        ;
    {
    }
    printf("%d\n", i);
}

void p5_10()
{
    int n, a, i;
    scanf("%d", &n);
    for (i = 0; n > 0; n--) {
        scanf("%d", &a);
        if (a < 0)
            ++i;
    }
    printf("%d\n", i);
}

void p5_15_a()
{
    double y, c;
    int x, i;
    scanf("%d", &x);
    for (i = 0, c = x, y = 0; i <= 30; i++, c *= x) {
        y += cos(c);
    }
    printf("%.5lf\n", y);
}

void p5_20()
{
    float x;
    for (x = 0; x < 1.1; x += 0.1) {
        printf("%0.5f %0.5f %0.5f\n", x, sin(x), cos(x));
    }
}

void p5_25()
{
    int x, i, t, n;
    scanf("%d", &x);
    for (i = 0, n = x, t = 0; i <= 30; i++, n *= x)
        if (sin(n) < 0) {
            t = 1;
            goto exit_1;
        }
exit_1:
    printf("%d\n", t);
}

void p5_30()
{
    int a1, a10, a100, k;
    k = 0;
    for (a100 = 0; a100 <= 9; a100++)
        for (a10 = 0; a10 <= 9; a10++)
            for (a1 = 1; a1 <= 9; a1++)
                if ((a1 + a10 + a100) <= 27)
                    k++;
    printf("%d\n", k);
}

void p5_38()
{
    int i, j, a, max;
    scanf("%d", &a);
    max = a;
    for (j = 1, i = 2; i <= 5; i++) {
        scanf("%d", &a);
        if (a == max)
            j++;
        else if (a > max) {
            max = a;
            j = 1;
        }
    }
    printf("%d\n", j);
}

void p5_45()
{
    int a, sign, i;
    i = 0;
    sign = a / abs(a);
    scanf("%d", &a);
    while (a != 0) {
        a = a / abs(a);
        if (sign != a) {
            ++i;
            sign = a;
        }
        scanf("%d", &a);
    }
    printf("%d\n", i);
}

void p5_55()
{
    int a, b;
    b = 0;
    scanf("%d", &a);
    while (a > 0) {
        b = b * 10 + a % 10;
        a /= 10;
    }
    printf("%d\n", b);
}


int main()
{
    /*p5_1();
    p5_6();
    p5_10();
    p5_15_a();
    p5_20();
    p5_25();
    p5_30();
    p5_38();
    p5_45();
    p5_55();*/
    char str[] = "Hello\0";
    printf("%s\n", str);
    return 0;
}