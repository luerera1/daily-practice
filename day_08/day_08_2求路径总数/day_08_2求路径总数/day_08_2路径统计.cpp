#include<iostream>
using namespace std;
int find(int n, int m)
{
	if (n>1 && m>1)
		return find(n - 1, m) + find(m - 1, n);
	else if (((n >= 1) && (m == 1)) || ((n == 1) && (m >= 1)))
		return m + n;
	else
		return 0;
}
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << find(n, m) << endl;
	}
	return 0;
}