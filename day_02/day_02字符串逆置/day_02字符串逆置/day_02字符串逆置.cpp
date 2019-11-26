#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	//ÄæÖÃ×Ö·û´®
	reverse(s.begin(), s.end());
	//ÄæÖÃµ¥´Ê
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		if (end != s.end() && *end != ' ')
			end++;
		reverse(start, end);
		if (start != s.end())
			start = end + 1;
		else
			start = end;
	}
	cout << s << endl;
	return 0;
}