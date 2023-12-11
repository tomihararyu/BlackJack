#pragma once
#include"cards.h"
class OPcard :public Cards
{
private:
	char* sweet[CARD_MAX];
public:
	void OpenCard(int CardNum);//持ってるカードの配列の番号を使いカードを表示
	int OPCardGet(int CardGet);//持ってるカードの番号を元に所持カードを返す関数
	void CardGen();//カードを切り分ける
};