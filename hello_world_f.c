#include <stdio.h>

int main()
{
    char str[32];
    int n = 123;
    sprintf(str, "%d", n); /* перевела в строковое представление*/

    printf("[%20s]\n", str); /* выводим строку */


    return 0;
}