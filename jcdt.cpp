#include <stdio.h>

int factorial(int x);

int main()
{
	int n;
	while (scanf_s("%d", &n) != EOF)
	{
		printf("%d! = %d\n", n, factorial(n));
	}
	return 0;
}

int factorial(int x)
{
	if (x == 0)
		return 1;
	else
		return (x*factorial(x - 1));
}