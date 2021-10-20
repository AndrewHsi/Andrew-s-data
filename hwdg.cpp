#include<iostream>
#include<stdio.h>
#include<cstring>
int judge_hy(char *str, int n);
using namespace std;
int main()
{
	char a[30];
	cout << "请输入一段字符串" << endl;
	gets_s(a);
	int n = strlen(a);
	if (judge_hy(a, n) == 1)
	{
		cout << "this is a palindrome" << endl;
	}
	else if (judge_hy(a, n) == 0)
	{
		cout << "this is not a palindrome" << endl;
	}

	return 0;
}

int judge_hy(char *str, int n)

{

	if (n == 1 || n == 0)//当字符是0个或者是一个的时候函数结束，是回文字符串

	{
		return 1;
	}
	else

	{
		if (str[0] == str[n - 1])
		{
			++str;
			n -= 2;
			return judge_hy(str, n);
		}

		else
		{
			return 0;
		}
	}
}
