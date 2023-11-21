#include <iostream>
#include<algorithm>
#include"cards.h"
using namespace std;
Cards::Cards() {
    m_nam = 0;
    const int size = 52;
    CaldNumber = new int[size]; // メモリを確保
    for (int i = 0; i < size; ++i) {//1～52を代入
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
    for (int i = 52; i > 1; --i) {
        int a = i - 1;
        int b = rand() % i;
        swap(CaldNumber[a], CaldNumber[b]);
    }
}
int Cards::CardsGetCard()//引数にカードを入れる
{
    if (m_nam >= 51)
    {
        cout << "エラー.カード枚数が最大に達しました。shuffleします。" << endl;
        CardsShuffle();
   }
    m_nam++;//何枚目かカウント
    return CaldNumber[m_nam - 1];
}