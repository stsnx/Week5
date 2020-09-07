#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int a;
vector<char> b;
void decToHex(int x)
{
	if (x > 0)
	{
		if (x % 16 < 10) b.push_back( (x % 16)+48);
		else
		{
			switch (x % 16)
			{
			case 10: b.push_back('A'); break;
			case 11: b.push_back('B'); break;
			case 12: b.push_back('C'); break;
			case 13: b.push_back('D'); break;
			case 14: b.push_back('E'); break;
			case 15: b.push_back('F'); break;
			}
		}
		decToHex(x / 16);
	}
}
int main()
{
	cin >> a;
	decToHex(a);
	for (int i = b.size() - 1; i >= 0; i--) cout << b[i];
	return 0;
}