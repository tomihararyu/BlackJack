#pragma once

class Cards;

class Character
{

protected:
    int hand[12];//��D
    int rank[12];//��
    int drowCardnam;//�h���[�J�[�h������
    int MAXnam=0;//�ő�̐�

public:
    void CardGet(Cards& card);
    Character();

private:
    void CardOpen();
    void CardGenerator(int& nam, int& rank);

};