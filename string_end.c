#include <stdio.h>
enum color {red, blue, white} colors;

void p10_3()
{
    const int n = 6;
    int c;
    int i;
    int arr[60];
    for (i = 0; (c = getchar()) && (i < n); i++) {
        arr[i] = c;
    }
    for (i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}


int main(int argc, char const **argv)
{
    int i;
    for (i = 1; i < argc; i++) {
        switch (argv[i]) {
            case :
        }
    }

    return 0;
}