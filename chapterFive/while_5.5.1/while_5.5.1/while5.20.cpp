#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	string My_string1, My_string2;
	bool flag = false;
	do
	{
		cin >> My_string1;
		if (My_string1 == My_string2)//����������ͬ���������������˳�ѭ��
		{
			cout << My_string1 << "�ظ�����" << endl;
			flag = true;
			break;
		}
		else
			My_string2 = My_string1;
		if (getchar() == '\n')  //�����س�ͣ��
			break;
	} while (cin);
	if (flag == false)
		cout << "û���ظ�" << endl;
}