#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string a;
	string b = "";
	cout << "텍스트 입력(한글 안 됨)";
	getline(cin, a);
	for (int i = 0; i < a.length(); i++)
	{
		if (isalpha(a[i]) || a[i] == ' ') b += a[i];
	}
	cout << b;
	return 0;
}
