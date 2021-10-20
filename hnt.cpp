#include <iostream>
#include <cstdio>
using namespace std;
int hanoi(int n, char x, char y, char z);
int num = 0;
int main()
{
	int n;
	printf("请输入汉诺塔的层数：");
	cin >> n;
	hanoi(n, 'A', 'B', 'C');
	printf("共移动了 %d 次。\n", num);
	return 0;
}
// n表示要将多少个"圆盘"从起始柱子A移动至目标柱子B
// x表示起始柱子,y表示目标柱子,z表示过渡柱子
int hanoi(int n, char x, char y, char z)
{
	if (n == 0)
	{
	}
	else
	{
		hanoi(n - 1, x, z, y);// 递归处理,一开始的时候,先将n-1个盘子移至过渡柱z上
		printf("第%d步：  将 %d 号圆盘从 %c 移至 %c \n", num + 1, n, x, y); // 然后再将最底下的大盘子直接移至目标柱子y
		num++;
		hanoi(n - 1, z, y, x); // 然后重复以上步骤,递归处理放在过渡柱z上的n-1个盘子,
		// 这时x已经为空，所以x被当成过渡柱了
	}
	return 0;
}
