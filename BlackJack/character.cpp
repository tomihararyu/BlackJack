#include <iostream>
#include<algorithm>
#include"character.h"
#include"card.h"
using namespace std;
void Character::CardGenerator(int& nam, int& rank)//�J�[�h�����蓖��
{
	
	const int CardRankMAX = 13;
	//�\���̂��߂̏���					//13�ȏ��							//26�ȓ�
	if (nam > CardRankMAX && nam<= (CardRankMAX * 2))
	{
		nam -= CardRankMAX;
		rank = 1;
		//cout << �_�C��;
	}					//26�ȏ��							//39�ȓ�
	else if (nam > (CardRankMAX * 2) && nam <= (CardRankMAX * 3))
	{
		nam -= CardRankMAX * 2;
		rank = 2;
		//cout << "�X�y�[�h";
	}							//39�ȏ�
	else if (nam > (CardRankMAX * 3))
	{
		nam -= CardRankMAX * 3;
		rank = 3;
		//cout << "�N���[�o�[";
	}
	else
	{
		rank = 0;
		//cout << "�n�[�g";
	}
}
