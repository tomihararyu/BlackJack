#include <iostream>
#include<algorithm>
#include"cards.h"
using namespace std;
Cards::Cards() {
    m_nam = 0;
    CaldNumber = new int[CARD_NUM]; // ���������m��
    for (int i = 0; i < CARD_NUM; ++i) {//1�`52����
        CaldNumber[i] = i + 1;
    }
    CardsShuffle();
}

Cards:: ~Cards() {
    delete[] CaldNumber; //�����������
    CaldNumber = NULL;
}
void Cards::CardsShuffle()
{
    for (int i = CARD_NUM; i > 1; --i) {
        int a = i - 1;
        int b = rand() % i;
        swap(CaldNumber[a], CaldNumber[b]);
    }
}
int Cards::CardsGetCard()//�����ɃJ�[�h������
{
    if (m_nam > CARD_NUM)
    {
        cout << "�G���[.�J�[�h�������ő�ɒB���܂����Bshuffle���܂��B" << endl;
        CardsShuffle();
   }
    m_nam++;//�����ڂ��J�E���g
    return CaldNumber[m_nam - 1];
}