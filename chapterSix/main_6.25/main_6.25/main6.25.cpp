#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)//实参列表
{
    string str;
    for (int i = 1; i != argc; ++i) {
        str += argv[i];
        str += " ";
    }

    cout << str << endl;
    return 0;
}