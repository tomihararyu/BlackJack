#pragma once
#include"common.h"
class Cards;

class Character
{

protected:
    int hand[CARD_MAX];//��D
    int rank[CARD_MAX];//��
    int drowCardnam;//�h���[�J�[�h������
    int MAXnam;//�ő�̐�

public:
    void CardGet(Cards& card);
    Character();

private:
    void CardOpen();
    void CardGenerator(int& nam, int& rank);

};