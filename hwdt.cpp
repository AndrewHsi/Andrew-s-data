#include<iostream>
#include<string>
using namespace std;
string sen;
string pal;
int len, i, j;

void main()
{
	cout << "please input a sentence\n";
	getline(cin, sen);
	cout << "the reverse order is:\n";
	len = sen.length();
	j = 0;
	for (i = 0; i<len; i++)
	{
		pal = sen.substr(len - i - 1, 1);
		cout << pal;
		if (pal == sen.substr(i, 1))
			j++;
	}
	if (j == len)
		cout << endl << "this sentence IS a palindrome\n";
	else
		cout << endl << "this sentence is NOT a palindrome\n";
}