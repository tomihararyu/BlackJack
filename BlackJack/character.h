#pragma once
#include"card.h"
class Character
{
protected:
    int sweetRankNam=0;//�����n�����߂̐����B�]�T�����delete�������B
    int number=0;
protected:
    int hand[12];
    int rank[12];
    int drowCardnam=0;
    int MAXnam=0;

public:
    void CardGenerator(int& nam, int& rank);


};