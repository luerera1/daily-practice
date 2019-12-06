#include<iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int x = (a + c) / 2;
	int z = (d - b) / 2;
	int y1 = (b + d) / 2;
	int y2 = (c - a) / 2;
	if (y1 == y2)
		cout << x << " " << y1 << " " << z << endl;
	else
		cout << "No" << endl;
	return 0;
}