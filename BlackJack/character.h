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
    int CrowCard(OPcard& OPcard);
    void CardGet(OPcard& OPcard);
    Character(const char* pName);
    ~Character();

private:
    char* _pName;//���O
};