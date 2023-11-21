#pragma once
#include"common.h"
class Cards;

class Character
{

protected:
    int hand[CARD_MAX];//手札
    int rank[CARD_MAX];//役
    int drowCardnam;//ドローカードした数
    int MAXnam;//最大の数

public:
    void CardGet(Cards& card);
    Character(const char* pName);
    ~Character();

private:
    void CardOpen();
    void CardGenerator(int& nam, int& rank);
    char* _pName;//名前
};