#include <iostream>
#include<algorithm>
#include"dealer.h"
#include"cards.h"
#include"player.h"
using namespace std;

void Dealer::DealerMove(Dealer& dealer, Cards& card, Player& player)
{
	for (;;)
	{
		dealer.CardGet(card);
		if (MAXnam >= 17)
		{
			break;
		}

	}
	dealer.defeat(player);
}
void Dealer::defeat(Player& player)
{
	int PlayerMAXnam = player.Win();

	if (PlayerMAXnam > 21)//�������ς���
	{
		cout << "�v���C���[�̔s�k" << endl;
	}
	else if (MAXnam > 21)
	{
		cout << "�M���̏���" << endl;
	}
	else if (PlayerMAXnam > MAXnam)
	{
		cout << "�M���̏���" << endl;
	}
	else
	{
		cout << "�v���C���[�̔s�k" << endl;
	}
}
