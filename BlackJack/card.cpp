#include <iostream>
#include<algorithm>
#include"card.h"
using namespace std;
Card::Card() {
    srand((unsigned int)time(NULL));//初期化
  const int size = 52;
    CaldNumber = new int[size]; // メモリを確保
    for (int i = 0; i < size; ++i) {//1～52を代入
        CaldNumber[i] = i + 1;
    }
    for (int i = size; i > 1; --i) {//シャッフル
        swap(CaldNumber[rand() % (i - 1)], CaldNumber[i - 1]);
    }
    
}

Card:: ~Card() {
    delete[] CaldNumber; //メモリを解放
}
void Card::CardGet(int& timp1)//引数にカードを入れる
{
   timp1  = CaldNumber[m_nam];
	m_nam++;//何枚目かカウント
}