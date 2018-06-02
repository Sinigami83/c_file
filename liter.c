#include <stdio.h>

/*void p6_3_a()
{
  int t;
  char d;
  d = '*';
  t = (d == '*');
}

void p6_3_b()
{
  int t;
  char d;
  d = '*';
  t = (d == 'a') || (d == 'q');
}

void p6_3_v()
{
  int t;
  char d;
  d = '*';
  t = (d >= '0') && (d <= '9');
}

void p6_6()
{
  printf("%d\n", 'S'+'U'+'M');
}

void p6_10()
{
  int i, j;
  for (i = 1; i <= 9; i++) {
    for (j = 1; j <= 9; j++)
      if (i == j)
        printf("%d", i);
      else
        printf("%d", 0);
    printf("\n");  
  }
}

void p6_15()
{
  char c;
  do {
    scanf("%c", &c);
  } while (c != 'a');
  scanf("%c", &c);
  printf("%c\n", c);
}

void p6_20()
{
  char c0, c1, c2;
  int k;
  scanf("%c %c %c", &c0, &c1, &c2);
  c0 = '5';
  c1 = '0';
  c2 = '8';
  k = (c0 - '0') + (c1 - '0') * 10 + (c2 - '0') * 100;
  printf("%d\n", k);
}*/

void p6_28()
{
  char d;
  scanf("%c", &d);
  while (d != '.') {
    scanf("%c", &d);
    
    scanf("%c", &d);
  }

}

int main()
{
  /*p6_3_a();
  p6_3_b();
  p6_3_v();
  p6_6();
  p6_10();
  p6_15();*/
  p6_20();
  return 0;
}