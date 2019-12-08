#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int W, H;
	cin >> W >> H;
	int res = 0;
	vector<vector<int>> a;
	a.resize(W);
	for (auto &e : a)
		e.resize(H, 1);
	for (int i = 0; i<W; i++){
		for (int j = 0; j<H; j++){
			if (a[i][j] == 1){
				res++;
				if (i + 2<W)
					a[i + 2][j] = 0;
				if (j + 2<H)
					a[i][j + 2] = 0;
			}
		}
	}
	cout << res << endl;
	return 0;
}