#include <iostream>
#include<algorithm>
#include"card.h"
using namespace std;
void Card::cards()
{
	srand(time(NULL));
	int size = 52;
	if (CaldNumber != NULL) {
		for (int i = 0; i < size; ++i)
		{
			CaldNumber[i] = i + 1;
		}
		for (int i = size; i > 1; --i) {
			swap(CaldNumber[rand() % (i - 1)], CaldNumber[i - 1]);
		}

	}
}
void Card::CardGet(int& Get)
{
	Get = CaldNumber[m_nam];
	m_nam++;
}