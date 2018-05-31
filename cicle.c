#include <stdio.h>
#include <math.h>

void p5_1()
{
  int i, a;
  a = 1;
  for (i = 1; i <= 10; i++)
    a *= i;
  printf("%d\n", a);
  
  i = a = 1;
  while (i <= 10) {
    a *= i;
    i++;
  }
  printf("%d\n", a);

  i = a = 1;
  do {
    a *= i;
    i++;
  } while (i <= 10); 
  printf("%d\n", a);
}

void p5_6()
{
  int a, b, i;
  scanf("%d", &a);
  b = a;
  for (b = a, i = 0; b > 0; b /= 10, i++);
    {}
  printf("%d\n", i);
}

void p5_10()
{
  int n, a, i;
  scanf("%d", &n);
  for (i = 0; n > 0; n--) {
    scanf("%d", &a);
    if (a < 0) 
      ++i;
  }
  printf("%d\n", i);
}

void p5_15_a()
{
  double y, c;
  int x, i;
  scanf("%d", &x);
  for (i = 0, c = x, y = 0; i <= 30; i++, c *= x) {
    y += cos(c);
  }
  printf("%.5lf\n", y);
}

int main()
{
  /*p5_1();
  p5_6();
  p5_10();
  p5_15_a();*/
  
  return 0;
}