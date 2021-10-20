#include<stdio.h>
int main()
{
	int a = 0, b = 1, n = 5;
	for (int i = 2; i <= n; i++){
		int t = b;
		b = a + b;
		a = t;
	}
	printf("%d\n", b);
	return 0;
}