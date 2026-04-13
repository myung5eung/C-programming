#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int num;
	cout << "구입할 물품의 개수>>";
	cin >> num;
	int* price = new int[num];
	if (!price) { cout << "no"; return -1; }
	cout << "물품" << num << "개의 가격입력>>";
	cin >> price[0]; 
	int max = price[0], min = price[0];
	for (int i = 1; i < num; i++) {
		cin >> price[i];
		if (max < price[i]) max = price[i];
		if (min > price[i]) min = price[i];
	}
	cout << "제일 싼 가격은 " << min<<"\n";
	cout << "제일 비싼 가격은 " << max;
	delete[]price;
	return 0;
}
