#include<stdio.h>

int Sub(int x, int y)
{
  return x - y;
}

int main()
{
  int x, y;
  
  printf("Enter two integer : ");
  scanf("%d %d", &x, &y);
  printf("Add : %d + %d = %d\n", x, y, Add(x, y));
  printf("Sub : %d - %d = %d\n", x, y, Sub(x, y));
  printf("Mul : %d * %d = %d\n", x, y, Mul(x, y));
  if (y == 0) {
		printf("Div : can't define.");
	}
	else {
		printf("Div : %d / %d = %.1f", x, y, Div(x, y));
	}
  return 0;
}
