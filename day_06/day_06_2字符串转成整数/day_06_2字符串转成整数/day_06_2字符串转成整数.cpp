class Solution {
public:
	int StrToInt(string str) {
		int len = str.length();
		if (len == 0)
			return 0;
		int dig = true;
		int i = 0;
		int num = 0;
		//�˵�ǰ��Ŀո�
		while (str[i] == ' '){
			i++;
		}
		//���з����ж�
		if (str[i] == '+'){
			i++;
		}
		else if (str[i] == '-'){
			i++;
			dig *= false;
		}
		while (str[i] != '\0'){
			//���ַ������Ƿ�Ϊ���ֵ��ж�
			if (str[i] >= '0'&&str[i] <= '9'){
				int flag = dig ? 1 : -1;
				num = num * 10 + flag*(str[i] - '0');
				//�������Ƿ���������ж�
				//    if((dig && num>0x7FFFFFFF)||(dig== && num<(signed int)0x80000000)){
				//        num=0;
				//        break;
				//    }
				i++;
			}
			else{
				num = 0;
				break;
			}

		}
		return num;
	}
};