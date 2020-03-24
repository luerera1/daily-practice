#include<iostream>
using namespace std;
int change(int number){
	int sum = 0;
	while (number>1){
		int r1 = number / 3;
		int r2 = number % 3;
		sum += r1;
		number = r1 + r2;
		if (number == 2){
			sum++;
			break;
		}
	}
	return sum;
}
int main(){
	int n;
	while (cin >> n){
		cout << change(n) << endl;
	}
	return 0;
}