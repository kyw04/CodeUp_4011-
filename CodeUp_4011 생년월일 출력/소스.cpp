#include <iostream>
using namespace std;

int main()
{
	string number;
	cin >> number;
	if (number[7] == '1' || number[7] == '2')
		cout << "19";
	else
		cout << "20";
	for (int i = 0; i < 6; i++)
	{
		cout << number[i];
		if (i % 2 && i != 5)
			cout << '/';
	}
	if (number[7] == '1' || number[7] == '3')
		cout << " M";
	else
		cout << " F";
	return 0;
}