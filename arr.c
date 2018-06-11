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
} 

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

void p8_14(char *y, const *x)
{
    int i;
    for (i = 0; i <= 39; ++i) {
        *(y+i) = x[i+1];
    }
}

void p8_18()
{
    const int n = 80;
    int i, c, p;
    int arr[n];
    c = getchar();
    for (p = 0, i = 0; i < n; ++i) {
        if (c >= '0' && c <= '9') {
            printf("%c\n", c);
        } else {
            arr[p] = c;
            ++p;
        }
        c = getchar();
    }
    for (i = 0; i <= p; ++i) {
        printf("%c\n", arr[i]);
    }
}*/ 

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

void p8_19()
{
    const int n = 70;
    int c, i, p;
    int m[n];
    for (p = 0, i = 0; ((c = getchar()) != '.') && (i < n); ++i, ++p){
        m[i] = c;
    }

    for (i = --p; i >= 0; --i) {
        printf("%c\n", m[i]); 
    }
}*/


/*void p8_20() 
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

void p8_21()
{
    const int n = 1000;
    char s[n];
    int i, e;
    
    for (i = 0; i <= n; i *= 2) {
        printf("%c\n", s[i]);
    }

    for (e = 0, i = 0; e <= n; e = i * i) {
        printf("%c\n", s[e]);
        i++;
    }
}

void p8_22()
{
    const int n = 100;
    const int m = 30;
    double x[n];
    double a[m];
    double s;
    int i;
    for (i = 0, s = 0; i < m; ++i) {
        s += x[a[i]];
    }
    printf("%c\n", s);
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
}

void p8_27()
{
    const int n = 70;
    double x[n], y[n];
    int i, j;

    for (i = 0, j = 0; i < n; ++i) {
        if (x[i] < 0) {
            y[j] = x[i];
            ++j;
        }
    }
    for (i = 0; i < n; ++i, ++j) {
        if (x[i] >=)
            y[j] = x[i];
    }
    for (i = 0; i < n; ++i) {
        x[i] = y[i];
    }
}

void p8_29()
{
    const int n = 4;
    int k, i, j;
    char d[n];
    scanf("%d", &k);

    for (i = n; i >= 0; --i) {
        j = k % 10;
        d[i] = j + '0';
        k /= 10;
    }
    
    for (i = 0; i <= n; ++i) {
        printf("%c\n", d[i]);
    }
}*/



int main()
{
    /*p8_10();
    printf("%d\n", p8_16());
    p8_20();
    p8_30();
    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    p8_13(a);
    p8_14();
    p8_18();
    p8_19();
    p8_29();*/
    
    const int n = 12;
    enum month {    yanvar, fevral, mart, 
                    aprel, may, iyun, 
                    iyul, avgust, sentyabr, 
                    oktyabr, noyabr, dekabr};
    enum month KD[n];
    KD[0] = yanvar;
    
    return 0;
}