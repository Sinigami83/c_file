#include <stdio.h>

int main()
{
    enum { max_arr = 20 };
    double x[max_arr];
    int i, j;
    double y;
    /* 8.5 g*/
    for (y = 0, i = 0, j = max_arr; i / 2 <= max_arr; i++, j--) {
        y = y + x[i] * x[j];
    }


    printf("%lf\n", y);
    return 0;
}