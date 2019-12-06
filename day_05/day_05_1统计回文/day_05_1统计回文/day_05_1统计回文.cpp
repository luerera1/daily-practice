#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	int count = 0;
	int flag = 1;
	for (int i = 0; i <= a.size(); i++)
	{
		//²åÈë×Ö·û´®b
		string str = a;
		str.insert(i, b);
		//ÅÐ¶ÏÊÇ·ñÊÇ»ØÎÄ´®
		size_t begin=0;
		size_t end = str.size() - 1;
		while (begin < end)
		{
			if (str[begin] != str[end])
				flag = 0;
			else
				begin++;
			    end--;
		}
		if (flag)
			count++;
	}
	cout << count << endl;
	return 0;
}