#include <iostream>
#include "GAME.h"
using namespace std;
void inputGame(Game games[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "请输入喜爱的游戏的名称： ";
        cin >> games[i].gameName;
        cout << "请输入游戏评分（10以内的小数）: ";
        cin >> games[i].gameScore;
    }
}

void sort(Game games[], const int size)
{
    Game temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (games[i].gameScore < games[j].gameScore)
            {
                temp = games[i];
                games[i] = games[j];
                games[j] = temp;
            }
        }
    }
}

void display(const Game games[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ": " << games[i].gameName << "(" << games[i].gameScore << ")" << endl;
    }
}