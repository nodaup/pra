#include"GAME.h"
#include<iostream>

int main()
{
    cout << "请输入5个你喜爱的游戏的名称，并给他们评分：" << endl;
    Game games[Size] = {};
    inputGame(games, Size);
    sort(games, Size);
    display(games, Size);
    return 0;
}