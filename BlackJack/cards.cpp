#include <iostream>
#include<algorithm>
#include"cards.h"
using namespace std;
Cards::Cards() {
    m_nam = 0;
    CaldNumber = new int[CARD_NUM]; // メモリを確保
    for (int i = 0; i < CARD_NUM; ++i) {//1～52を代入
        CaldNumber[i] = i + 1;
    }
    CardsShuffle();
}

Cards:: ~Cards() {
    delete[] CaldNumber; //メモリを解放
    CaldNumber = NULL;
}
void Cards::CardsShuffle()
{
    for (int i = CARD_NUM; i > 1; --i) {
        int a = i - 1;
        int b = rand() % i;
        swap(CaldNumber[a], CaldNumber[b]);
    }
}
int Cards::CardsGetCard()//引数にカードを入れる
{
    if (m_nam > CARD_NUM)
    {
        cout << "エラー.カード枚数が最大に達しました。shuffleします。" << endl;
        CardsShuffle();
   }
    m_nam++;//何枚目かカウント
    return CaldNumber[m_nam - 1];
}