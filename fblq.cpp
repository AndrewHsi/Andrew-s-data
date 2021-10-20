#include <iostream>

using namespace std;
int f[41];

int main(){
	int num, m;
	cin >> num;
	while (num--){
		f[1] = 1;
		f[2] = 1;
		for (int i = 3; i < 41; i++){
			f[i] = f[i - 1] + f[i - 2];
		}
		cin >> m;
		cout << f[m] << endl;
	}
	return 0;
}