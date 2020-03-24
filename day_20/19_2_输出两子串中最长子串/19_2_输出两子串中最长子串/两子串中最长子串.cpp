#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	string s1, s2;
	while (cin >> s1 >> s2){
		if (s1.size()>s2.size())
			swap(s1, s2);
		int len1 = s1.size();
		int len2 = s2.size();
		vector<vector<int>> v(len1 + 1, vector<int>(len2 + 1, 0));
		int max = 0, start = 0;
		for (int i = 1; i <= len1; i++){
			for (int j = 1; j <= len2; j++){
				if (s1[i - 1] == s2[j - 1])
					v[i][j] = v[i - 1][j - 1] + 1;
				if (max<v[i][j])
				{
					max = v[i][j];
					start = i - max;
				}
			}
		}
		cout << s1.substr(start, max) << endl;
	}
	return 0;
}