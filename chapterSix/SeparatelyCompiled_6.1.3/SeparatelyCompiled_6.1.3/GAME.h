#pragma once
#ifndef GAME_H
#define GAME_H

#include<string>
using namespace std;

struct Game
{
    string gameName;
    float gameScore;
};

void inputGame(Game games[], const int size);
void sort(Game games[], const int size);
void display(const Game games[], const int size);

const int Size = 5;

#endif // !GAME_H
