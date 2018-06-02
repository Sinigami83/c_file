#include <errno.h>
#include <stdio.h>

int main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    if (!f) {
        perror("file.txt");
        // exit(1);
    }
    return 0;
}