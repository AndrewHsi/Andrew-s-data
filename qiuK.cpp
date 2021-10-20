#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//low and up have to be according indices in C++; 
//k mean the kth number, according C++ stlye index is k-1
int selectKthNum(vector<int> &vi, int low, int up, int k)
{
	int p = up - low + 1;
	if (p<6)
	{
		sort(vi.begin() + low, vi.begin() + up + 1);
		return vi[k - 1];
	}

	//�������5����Ҳ�ǿ��Եģ���Ϊ����ݹ�ѭ�������԰�ǰ���ȡ��β�������ϣ����Խ��Ҳ�Ǿ�ȷ�ġ�
	int q = p / 5;
	vector<int> medVec;
	//������м���ȡ����Ӧ��ע��ż����ʱ�򣬱�����4��ʱ��������ȡ��������������Ҳ����ȡ�ڶ������ɡ�
	int mid = q / 2;
	//��������޸�Ϊ��
	//int mid = (q+1)/2; //���Ҳ��һ����

	for (int i = 0; i < 5; i++)
	{
		int m = selectKthNum(vi, i*q, (i + 1)*q - 1, mid + 1);
		medVec.push_back(m);
	}
	//������м���ȡ����Ӧ��ע��ż����ʱ�򣬱�����4��ʱ��������ȡ��������������Ҳ����ȡ�ڶ������ɡ�
	int mNum = selectKthNum(medVec, 0, medVec.size() - 1, medVec.size() / 2 + 1);
	//��������޸�Ϊ��
	//int mNum = selectKthNum(medVec, 0, medVec.size()-1, (medVec.size()+1)/2);
	//�������
	vector<int> vec1, vec2, vec3;
	for (int i = low; i <= up; i++)
	{
		if (vi[i] > mNum) vec3.push_back(vi[i]);
		if (vi[i] == mNum) vec2.push_back(vi[i]);
		if (vi[i] < mNum) vec1.push_back(vi[i]);
	}

	if (vec1.size() >= k)
		return selectKthNum(vec1, 0, vec1.size() - 1, k);
	else if (vec1.size() + vec2.size() >= k)
		return mNum;
	else if (vec1.size() + vec2.size()<k)
		return selectKthNum(vec3, 0, vec3.size() - 1, k - vec1.size() - vec2.size());
}

int main()
{
	int a[] = { 3, 5, 7, 9, 2, 12, 1, 0, 8, 14, 4, 6, 10, 11, 13, 5, 8, 12 };
	vector<int> va(a, a + 18);
	int b[] = { 31, 25, 37, 49, 52, 63, 71, 20, 87, 95, 34 };
	vector<int> vb(b, b + 11);
	for (auto x : va)
		cout << x << " ";
	cout << endl;

	int mid = selectKthNum(va, 0, va.size() - 1, 13);

	cout << "The Kth number is: \n";
	cout << mid << endl;

	cout << endl;
	system("pause");
	return 0;
}
