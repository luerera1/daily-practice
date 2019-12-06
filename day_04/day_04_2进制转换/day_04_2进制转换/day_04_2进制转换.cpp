#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s, table = "0123456789ABCDEF";
	int M, N;
	cin >> M >> N;
	int flag = 0;
	if (M<0){
		M = 0 - M;
		flag = 1;
	}
	while (M){
		s += table[M%N];
		M = M / N;
	}
	if (flag)
		s += '-';
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;

}