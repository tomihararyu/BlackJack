#pragma once
#include"cards.h"
class OPcard :public Cards
{
private:
	char* sweet[CARD_MAX];
public:
	void OpenCard(int CardNum);//�����Ă�J�[�h�̔z��̔ԍ����g���J�[�h��\��
	int OPCardGet(int CardGet);//�����Ă�J�[�h�̔ԍ������ɏ����J�[�h��Ԃ��֐�
	void CardGen();//�J�[�h��؂蕪����
};