#include"GAME.h"
#include<iostream>

int main()
{
    cout << "������5����ϲ������Ϸ�����ƣ������������֣�" << endl;
    Game games[Size] = {};
    inputGame(games, Size);
    sort(games, Size);
    display(games, Size);
    return 0;
}