#include <stdio.h>

/*int p8_10()
{
    const int max_arr = 20;
    int i;
    enum republic = {Gruzia, Rossia, Ukrain};
    enum citi = {Kiev, Moscow, Odessa, Sochi, Tbelisi, Tomsk};
    enum citi x[max_arr];
    for (i = 0; i <= max_arr; ++i) {
        x[i] 
    }
}*/

int main()
{
    const int max_arr = 40;
    double x[max_arr];
    int i, j;
    double y;
    /* 8.5 g
    for (y = 0, i = 0, j = max_arr; i / 2 <= max_arr; ++i, --j) {
        y = y + x[i] * x[j];
    }
    printf("%lf\n", y);*/

    for (y = 0, i = 1; i <= max_arr / 2; i += 2) {
        y = y + x[i] * x[i];
    }
    printf("%lf\n", y);    
    return 0;
}