#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

float Div(int x, int y)
{
	return (float)x / y;
}

int main(void)
{
	int x, y;
  
	printf("Enter two integer : ");
	scanf("%d %d", &x, &y);
	printf("Add : %d + %d = %d\n", x, y, Add(x, y));
	printf("Sub : %d - %d = %d\n", x, y, Sub(x, y));
	printf("Mul : %d * %d = %d\n", x, y, Mul(x, y));
	if (y == 0) {
		printf("Div : Can't define.");
	}
	else {
		printf("Div : %d / %d = %.1f", x, y, Div(x, y));
	}
	return 0;
}
