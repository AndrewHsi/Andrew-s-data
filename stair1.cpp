#include <iostream>
using namespace std;
unsigned long cal(unsigned long n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	return cal(n - 1) + cal(n - 2);
}
int main()
{
	size_t n;
	cout << "请输入你要走的台阶数 n :";
	cin >> n;
	cout << "走台阶有 " << cal(n) << " 种方案。" << endl;
	return 0;
}
