#pragma once
#include"card.h"
class Character
{
protected:
    int sweetRankNam=0;//引き渡すための数字。余裕あればdeleteしたい。
    int number=0;
protected:
    int hand[12];
    int rank[12];
    int drowCardnam=0;
    int MAXnam=0;

public:
    void CardGenerator(int& nam, int& rank);


};