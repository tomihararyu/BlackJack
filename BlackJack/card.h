#pragma once
class Card
{
private:
	int* CaldNumber;
	int m_nam = 0;//何枚ドローしたか
public:
	
	void CardGet(int& Get);
	Card();
	~Card();
};