#include <stdio.h>

int main() 
{
	int a, b, x;
	int max;
	/*scanf("%d %d", &a, &b);*/
	
	a = b = x = 5;
	printf("%d %d\n", a, b);
	
	printf("%d %d %d\n", ++a, --b, x += 5);

	max = a > b ? a : b;

	printf("%d\n", max);
	return 0;
}