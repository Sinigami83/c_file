#include <stdio.h>

/*void p8_10()
{
    const int n = 30;
    int a[n];
    int b[n];
    int c[n];
    int i, j;
    for (i = 0; i <= n; ++i) {
        if (a[i] != b[i]) {
            for (j = 0; j <= n; ++j) {
                c[j] = a[j];
            }
            goto exit_f;
        } 
    }
    exit_f:;
} */

void p8_13(int *a)
{
    int n, l;

    for (n = 1; n < 20; ++n) {
        l = n % 6;
        if (l) {
            printf("%2d ", *(a+n));
        } else {
            printf("%2d \n", *(a+n));
        }
    }
    printf("\n");
}

/*int p8_16()
{
    const int n = 16;
    int x[n], y[n];
    int i, x_1, y_1;
    for (i = 0; i <= n; ++i) {
        x[i] = 1;
    }

    for (i = 0, x_1 = 0, y_1 = 0; i <= n / 2; ++i) {
        x_1 += (x[i * 2 + 1] * y[i * 2 + 1]); 
        y_1 += (x[i * 2] * y[i * 2]);
    }
    return x_1 / y_1;
}

void p8_20() 
{
    char c;
    char a[9];
    int max;

    scanf("%c", &c);
    while (c != '.') {
        ++a[c - '0'];
        scanf("%c", &c);
    } 
    max = a[0];
    for (i = 1; i <= 9; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }
}

void p8_26() 
{
    const int n = 100;
    double x[n];
    int i;
    x[n] = x[0];
    for (i = 0; i < n; ++i) {
        x[i] = x[i + 1];
    }
}*/

/*void p8_30()
{
    const int n = 12;
    enum month = {  yanvar, fevral, mart, 
                    aprel, may, iyun, 
                    iyul, avgust, sentyabr, 
                    oktyabr, noyabr, dekabr};
    enum month KD[12]; 
}*/

int main()
{
    /*p8_10();
    printf("%d\n", p8_16());
    p8_20();
    p8_30();*/
    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    p8_13(a);
    return 0;
}