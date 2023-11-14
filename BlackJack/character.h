#pragma once
#include"card.h"
class Character
{

protected:
    int hand[12];//手札
    int rank[12];//役
    int drowCardnam=0;//ドローカードした数
    int MAXnam=0;//最大の数

public:
    void CardGenerator(int& nam, int& rank);

};