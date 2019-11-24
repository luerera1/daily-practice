#include<iostream>
#include<algorithm>
using namespace std;

//函数功能：判断一个数是不是完全数
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
//函数功能：返回0-n之间的完备数个数
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
	//循环判断多个用例
	while (cin >> n) {
		cout << getNum(n) << endl;
	}
	return 0;
}
