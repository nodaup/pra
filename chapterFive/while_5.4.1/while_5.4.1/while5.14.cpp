#include <iostream>  
#include <string>  
#include <vector>  
using namespace std;
void main()
{
	string My_string, before_string, max_repeatstring;
	vector<string> vec1;//���ÿ����������ĵ���
	vector<int> vec2;//���ÿ����������Ĵ���
	int repeat_number = 0, flag = 0, m = 0;
	while (cin >> My_string)
	{
		if (My_string == before_string)
		{
			++repeat_number;
			m++;//�˱�������Ϊ�������ĵ��ʲ����ڵ���else,������Ҫ��¼�±����ʵĳ��ִ���
		}
		else
		{
			vec2.push_back(repeat_number);//��¼����һ�����ʵ��ظ�����
			repeat_number = 1;
			before_string = My_string;
			vec1.push_back(My_string);//�˴����������ϴβ�ͬ�ĵ��ʣ���¼����
			m = 0;
		}
	}

	vec2.push_back(m + 1);
	int a = 0;
	vector<int>::iterator it1 = vec2.begin();
	for (it1; it1 != vec2.end(); ++it1)
	{
		if (*it1 > a)
		{
			a = *it1;//�ҵ����Ԫ��
		}
	}

	for (int i = 0; i < vec2.size(); i++)
	{
		if (vec2[i] == a)
		{
			cout << "����" << vec1[i - 1] << "���ֵĴ���Ϊ��" << vec2[i] << "��" << endl;
		}
	}
}