#pragma once
#include"common.h"
class OPcard;

class Character
{

protected:
    int CardNumRank[52];
    int drowCardnam;//ドローカードした数
    int MAXnam;//最大の数

public:
    int CrowCard(OPcard& OPcard);
    void CardGet(OPcard& OPcard);
    Character(const char* pName);
    ~Character();

private:
    char* _pName;//名前
};