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
