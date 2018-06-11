#include <stdio.h>
#include <errno.h>
void exemple();

int main()
{
    int n;
    FILE *seria;
    FILE *num;
    seria = fopen("number.txt", "r");
    if (!seria) {
        perror("number.txt");
        return 1;
    }
    while (fscanf(seria, "%d", &n) == 1) {;
        printf("%d\n", n);
    }
    fclose(seria);
    
    num = fopen("qwe.txt", "w");
    if (!num) {
        perror("qwe.txt");
        return 1;
    }
    fputs("Hello world", num);
    fclose(num);
    return 0;
}


/*void exemple()
{
    FILE *first_file;
    first_file = fopen("text.txt", "a+");
    if (!first_file) {
        perror("text.txt");
        return 2;
    }    
    fclose(first_file);
    

    FILE *from, *to;
    int c, lnum;
    lnum = 1;
    if (argc < 3) {
        fprintf(stderr, "Too few arguments\n");
        return 1;
    }
    form = fopen(argv[1], "r");
    if (!form) {
        perror(argv[1]);
        return 2;
    }
    to = fopen(argv[2], "w");
    if (!to) {
        perror(argv[2]);
        return 3;
    }
    lnum = 1;
    while (lnum <= 10 && (c = fgetc(form)) != EOF) {
        fputc(c, to);
        if (c == '\n') {
            lnum++;
        }
    }
}*/