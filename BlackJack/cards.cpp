#include <iostream>
#include<algorithm>
#include"cards.h"
using namespace std;
Cards::Cards() {
  const int size = 52;
    CaldNumber = new int[size]; // ���������m��
    for (int i = 0; i < size; ++i) {//1�`52����
        CaldNumber[i] = i + 1;
    }
    for (int i = size; i > 1; --i) {//�V���b�t��
        swap(CaldNumber[rand() % (i - 1)], CaldNumber[i - 1]);
    }
    
}

Cards:: ~Cards() {
    delete[] CaldNumber; //�����������
    CaldNumber = NULL;
}
void Cards::CardGet(int& timp1)//�����ɃJ�[�h������
{
   timp1  = CaldNumber[m_nam];
	m_nam++;//�����ڂ��J�E���g
}