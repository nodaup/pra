
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	char cval, char_before = '\0'; //������е�0ֵ��ʾ��Ϊ'\0',�ɷ�ֹ���ĳ�ʼֵ(�����)������ĳ���ַ���ֵ.
	int sum_ff = 0, sum_fl = 0, sum_fi = 0;
	while (cin >> std::noskipws >> cval) // �˴���std::noskipws��ʾ���ǲ������κεط��Ŀհף������Ʊ���Ϳո�ȣ�
	{
		switch (cval)
		{
		case 'f':
			if (char_before == 'f')
			{
				++sum_ff;
			}
			break;
		case 'l':
			if (char_before == 'f')
			{
				++sum_fl;
			}
			break;
		}
		char_before = cval;//����ǰ���ַ�����char_before����Ϊ�´��жϵ�����
		//����´��ж���char_beforeΪf�ַ�����ôֻҪ���жϵ�ǰ�ַ��Ƿ�Ϊf��l��i����
	}
	cout << "�ַ�����ff�ĸ���Ϊ��" << sum_ff << endl;
	cout << "�ַ�����fl�ĸ���Ϊ��" << sum_fl << endl;
	cout << "�ַ�����fi�ĸ���Ϊ��" << sum_fi << endl;
}