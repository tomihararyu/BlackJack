#include <iostream>
#include<algorithm>
#include"dealer.h"
#include"cards.h"
#include"player.h"
using namespace std;
Dealer::Dealer():Character("Dealer")
{

}
Dealer::~Dealer()
{

}

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
}
