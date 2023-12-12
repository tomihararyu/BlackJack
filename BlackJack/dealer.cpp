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
		cout << "‡Œv" << CrowCard(opcard) << endl;
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
	cout << PlayerMAXnam << "‘Î" << CrowCard(opcard) << "‚Å" << endl;

	cout << "\n\n\n\nŒ‹‰Ê:";
	if (PlayerMAXnam > BlackJack)//‚±‚±‚à•Ï‚¦‚é
	{
		cout << "ƒvƒŒƒCƒ„[‚Ì”s–k" << endl;
	}
	else if (MAXnam > BlackJack)
	{
		cout << "‹M•û‚ÌŸ—˜" << endl;
	}
	else if (PlayerMAXnam > MAXnam)
	{
		cout << "‹M•û‚ÌŸ—˜" << endl;
	}
	else
	{
		cout << "ƒvƒŒƒCƒ„[‚Ì”s–k" << endl;
	}
	opcard.a();
}
