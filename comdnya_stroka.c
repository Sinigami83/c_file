#include <stdio.h>

int main(int argc, char **argv)
{
    /*int i;
    for (i = 1; i < argc; i++)
        printf("[%s]\n", argv[i]);

    argv++;
    while (*argv) {
        printf("[%s]\n", *argv);
        argv++;
    }*/

    /*while (*++argv)
        printf("[%s]\n", *argv);*/
    /* code */

    printf("My name is %s\n", argv[1]);
    return 0;
}