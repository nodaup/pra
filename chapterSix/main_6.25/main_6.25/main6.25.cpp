#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)//ʵ���б�
{
    string str;
    for (int i = 1; i != argc; ++i) {
        str += argv[i];
        str += " ";
    }

    cout << str << endl;
    return 0;
}