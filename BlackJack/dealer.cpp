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

	if (PlayerMAXnam > 21)//‚±‚±‚à•Ï‚¦‚é
	{
		cout << "ƒvƒŒƒCƒ„[‚Ì”s–k" << endl;
	}
	else if (MAXnam > 21)
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
