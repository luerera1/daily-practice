#include<iostream>
#include<cstdio>
#include<cmath>
int main()
{
	unsigned int n;
	while (std::cin >> n) {
		printf("%d =", n); //���90 = 
		for (unsigned i = 2; i <= std::sqrt(n); i++) {
			while (n % i == 0 && n != i) //������ͬһ������ֱ�����������ų��պ��Ǹ�����n�η������ {
				printf(" %u *", i); //��һ�δ�ӡ 2 *,�ڶ��δ�ӡ���� 3 * 
			n /= i; //���������޸�n��ֵ 
		}
	}
	printf(" %d\n", n); //������n�Ѿ��Ǵ������һ���������������һ����������5 
}
return 0;
}