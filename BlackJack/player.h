#pragma once
#include"character.h"
class Player : public Character
{

public:
	int Win();
	void SecondPlayerDrow(Cards& card);
	
};
