#pragma once

class Cards;

class Character
{

protected:
    int hand[12];//手札
    int rank[12];//役
    int drowCardnam;//ドローカードした数
    int MAXnam=0;//最大の数

public:
    void CardGet(Cards& card);
    Character();

private:
    void CardOpen();
    void CardGenerator(int& nam, int& rank);

};