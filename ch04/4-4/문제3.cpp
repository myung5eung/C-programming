#include <iostream>
#include <string>
using namespace std;
int  main(void)
{
	string a;
	int count = 0;
	cout << "문자열 입력";
	getline(cin, a);
	int finda = a.find('a'); 
	while (finda != -1) 
	{    		
		count++;
		finda = a.find('a', finda + 1);
	}


	cout << "문자a는" << count << "개 있습니다.";
	return 0;
}
