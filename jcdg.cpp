#include <stdio.h>
int main()
{
	int sum = 1;
	int n, i;
	while (scanf_s("%d", &n) != EOF)
	{
		for (i = 2; i <= n; i++)
		{
			sum = sum*i;
		}
		printf("%d! = %d\n", n, sum);
	}
	return 0;
}