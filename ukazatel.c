int string_length(const char *str)
{
    int i;
    /*i = 0;
    while (str[i] != '\0') {
        i++;
    return i;
    }*/

    /*for (i = 0; str[i]  *(str + i) ; i++)
        {} */
    const char *p;
    /*p = str;
    while (*p)
        p++;*/

    for (p = str; *p; p++)
        {}

    return p - str;
}

void string_copy(char *dest, const char *src);
{
    /*int i;
    for (i = 0; src[i]; i++) {
        dest[i] = src[i];
    }
    dest[i] = 0;*/
    /*while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = 0;*/
    for (; *src; dest++; src++) {
        *dest = 0;
    }
}

int main()
{
    const int n = 20;
    double *k;
    
    int m[n];

    k = malloc(360*sizeof(double));

    free(k);
    return 0;
}