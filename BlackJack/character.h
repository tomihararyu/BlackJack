#pragma once
#include"common.h"
class OPcard;

class Character
{

protected:
    int CardNumRank[52];
    int drowCardnam;//�h���[�J�[�h������
    int MAXnam;//�ő�̐�

public:
    void CardGet(OPcard& OPcard);
    Character(const char* pName);
    ~Character();
    int CrowCard(OPcard& OPcard);

private:
    char* _pName;//���O
};