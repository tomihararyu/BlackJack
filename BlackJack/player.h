#pragma once
class Player
{

private:

	int PlayerHand[10] = { 0 };
	int PlayerNumber=0;
	int PlayerRank[10] = { 0 };
	
public:
	void DrowCard(int arr, int rank);
	void CardOpen(int& PlayerMAXnam);
	
};
