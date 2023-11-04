#pragma once
class Enemi
{

private:

	int EnemiHand[10] = { 0 };
	int EnemiNumber = 0;
	int EnemiRank[10] = { 0 };

public:
	void EnemiDrowCard(int arr, int rank);
	void EnemiCardOpen(int& enemiMAXnam);

};
