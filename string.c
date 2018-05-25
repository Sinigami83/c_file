int string_length(const char *str)
{
	const char *p;
	for (p = str; *p; p++)
		{}
	return p-str;
}

void string_copy(char *dest, const char *src)
{
	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;

	for (;*src; dest++, src++)
		*dest = *src;
	*dest = 0;

	while ((*dest++ = *src++));
}

int main()
{	
	char str[];
	char *ptr = "Hello";
	
	str[6] = "Hello";

	str[4] = 0;
	ptr[4] = 0;

	return 0;
}