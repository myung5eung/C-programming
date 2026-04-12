#include <iostream>
#include <string>
using namespace std;
int  main(void)
{
	string a;
	string result = "";
	int i = 1;
	while (1)
	{
		cout << "문자열입력: ";
		getline(cin, a);
		if (a == "quit") break;
		cout << "이어진 문자열: ";
		result += "<" + to_string(i) + ">" + a;
		cout << result << endl;
		i++;

	}
	return 0;
}
