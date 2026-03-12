# Title : 실습과제5
# Author : myungseungyeon
# Data : 26.3.12

#include <iostream>
using namespace std;
int main(void)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i+1>=j)
			{
				cout << "*";
			}
			else cout << "  ";

		}
		cout << "\n";
	}
	return 0;
}
