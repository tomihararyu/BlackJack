#pragma once
#include"cards.h"
class Character
{

protected:
    int hand[12];//��D
    int rank[12];//��
    int drowCardnam=0;//�h���[�J�[�h������
    int MAXnam=0;//�ő�̐�

public:
    void CardGet(Cards& card);

private:
    void CardOpen();
    void CardGenerator(int& nam, int& rank);

};