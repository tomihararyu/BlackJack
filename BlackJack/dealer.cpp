#include <iostream>
#include<algorithm>
#include"dealer.h"
using namespace std;
Dealer::Dealer():Character("Dealer")
{

}
Dealer::~Dealer()
{

}

void Dealer::DealerMove(Dealer& dealer, OPcard& opcard, Player& player)
{
	for (;;)
	{
		dealer.CardGet(opcard);
		opcard.CardGen();
		cout << "���v" << CrowCard(opcard) << endl;
		if (MAXnam >= 17)
		{
			break;
		}

	}
	dealer.defeat(player,opcard);
}
void Dealer::defeat(Player& player,OPcard& opcard)
{
	int PlayerMAXnam = player.CrowCard(opcard);
	cout << PlayerMAXnam << "��" << CrowCard(opcard) << "��" << endl;

	cout << "\n\n\n\n����:";
	if (PlayerMAXnam > BlackJack)//�������ς���
	{
		cout << "�v���C���[�̔s�k" << endl;
	}
	else if (MAXnam > BlackJack)
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
	opcard.a();
}
