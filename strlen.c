int string_length(const char *str)
{
    const char *p;
    for (p = str; *p; p++) {
    }
    return p - str;
}

void string_copy(char *dest, const char *src)
{
    int i;
    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = 0;
}

void string_copy(char *dest, const char *src)
{
    for (; *src; dest++, src++;)
        *dest = *src;
    *dest = 0;
}