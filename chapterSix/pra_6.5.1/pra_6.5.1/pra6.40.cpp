
#include <iostream>
#include<string>
#include<vector>
using namespace std;

string make_plural(size_t ctr, const string& word, const string& ending = "s")//�˴�������Ŀ��������Ӧ���ǵ������βθ���"s"��ӦΪ���ַ�����
{
	//size_t��ʾ����unsigned int
	return (ctr > 1) ? word + ending : word;
}
int main(int argc, char* argv[])
{
	cout << "�����ʵĵ�����ʽ��" << make_plural(1, "success", "es") << "  " << make_plural(1, "failure") << endl;
	cout << "�����ʵĸ�����ʽ��" << make_plural(2, "success", "es") << "  " << make_plural(2, "failure") << endl;
	return 0;//����ִ�гɹ�
}