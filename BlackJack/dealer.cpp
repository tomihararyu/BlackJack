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
		cout << "合計" << CrowCard(opcard) << endl;
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
	cout << PlayerMAXnam << "対" << CrowCard(opcard) << "で" << endl;

	cout << "\n\n\n\n結果:";
	if (PlayerMAXnam > BlackJack)//ここも変える
	{
		cout << "プレイヤーの敗北" << endl;
	}
	else if (MAXnam > BlackJack)
	{
		cout << "貴方の勝利" << endl;
	}
	else if (PlayerMAXnam > MAXnam)
	{
		cout << "貴方の勝利" << endl;
	}
	else
	{
		cout << "プレイヤーの敗北" << endl;
	}
	opcard.a();
}
