#pragma once
#include"character.h"
class Player : public Character
{

public:
	Player();
	~Player();
	int Win();
	void SecondPlayerDrow(OPcard& card);
	
};
