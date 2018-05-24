#include <stdio.h>
#include <math.h>
//2 razdel
void p2_1a() 
{
	double x, y;
	x = 0.3;
	y = -1.6;

	x*x + y*y <= 4? printf("p2_1a TRUE\n"): printf("p2_1a FALSE\n");
}

void p2_1b()
{
	int k;
	k = 15;
	(k%7 == k / 5 - 1)? printf("p2_1b TRUE\n"): printf("p2_1b FALSE\n");
}

void p2_1v()
{
	double p;
	p = 0.182;
	p = trunc(p *= 10);
	printf("%d\n", (int)p);	
}

//4 razdel

double p4_1a(int x)
{
	if (x > 0 || x < 2) 
		return cos(x) * cos(x);
	else
		return 1 - sin(x*x);
}

int p4_1g(int a, int b, int c)
{
	if (a > b) 
	{
		if (a > c)
			return a;
		else
			return c;
	}
	else
		if (b > c)
			return b;
		else
			return c;
}

int p5_1(int a)
{
	if (a == 0)
		return a = 1;
	else
		return a = a * p5_1(a-1);		
}

int p5_2()
{
	int i = 1;
	double s = 0;
	do {
		s = s + 1 / i;
		--i;
	} while (i >= 1);
	printf("%.3lf\n", s);
}

void p5_2g()
{
	int i;
	for (i = 1; i <= 15; i++)
		printf("%d\t", i);
	printf("\n");
}

int p5_10() 
{
	int q, w, n, i;
	scanf("%d", &n);

	scanf("%d", &q);
	w = q;

	for (i = 1; i < n; i++) {
		scanf("%d", &q);
		if (q < w) 
			w = q;
	}
	return w;
}

int main()
{
	p2_1a();
	p2_1b();
	p2_1v();
	printf("%lf\n", p4_1a(1));
	printf("%d\n", p4_1g(2, 3, 1));
	printf("%d\n", p5_1(6));
	p5_2();
	p5_2g();
	printf("%d\n", p5_10());
	return 0;
}