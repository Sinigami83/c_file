#include <math.h>
#include <stdio.h>
void p4_1_a()
{
    double y;
    int x;
    scanf("%d", &x);
    y = (x > 0 && x < 2) ? (cos(x) * cos(x)) : (1 - sin(x * x));
    printf("%.5lf\n", y);
}

void p4_1_v()
{
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    a > b ? (x = a, y = b) : (x = b, y = a);
    printf("%d %d\n", x, y);
}

void p4_1_d()
{
    int x, y, z;
    scanf("%d %d", &x, &y);
    z = x < 0 ? (x > y ? x : y) : (x < y ? x : y);
    printf("%d\n", z);
}

void p4_5()
{
    int w;
    scanf("%d", &w);
    if (1 / tan(w) < 0.5)
        printf("%d\n", -w);
    else if (w == 0)
        printf("%d\n", w = 1);
}

int p4_9()
{
    int a, b, c, x;
    a = b = 1;
    c = 0;
    x = a ? b : c;
    return x;
}

void p4_20()
{
    int i, a, b;
    b = 1;
    scanf("%d", &a);
    for (i = 1; a == 0; i++) {
        scanf("%d", &a);
        b *= a;
    }
    printf("%.5lf\n", (double)(b / i));
}

int main()
{
    p4_1_a();
    p4_1_v();
    p4_1_d();
    p4_5();
    p4_9();
    p4_20();
    return 0;
}
