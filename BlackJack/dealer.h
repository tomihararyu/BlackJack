#pragma once
#include"character.h"

class Player;
class Dealer : public Character
{
private:
	void defeat(Player& player);
public:
	void DealerMove(Dealer& enemi, Cards& card ,Player& player);
	Dealer();
	virtual ~Dealer();
};
