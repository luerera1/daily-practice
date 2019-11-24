#include<iostream>
#include<algorithm>
using namespace std;

//�������ܣ��ж�һ�����ǲ�����ȫ��
bool isDivisor(int d) {
	int sum = 0;
	for (int i = 1; i <= d / 2; ++i) {
		if (d % i == 0)
			sum += i;
	}
	if (sum == d)
		return true;
	return false;
}
//�������ܣ�����0-n֮����걸������
int getNum(int n) {
	int count = 0;
	for (int i = 1; i <= n; ++i) {
		if (isDivisor(i))
			++count;
	}
	return count;
}
int main() {
	int n;
	//ѭ���ж϶������
	while (cin >> n) {
		cout << getNum(n) << endl;
	}
	return 0;
}
