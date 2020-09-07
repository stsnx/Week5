#include<iostream>
using namespace std;
string s;
double t;
void hexToDec(string h, int i)
{
	if (i >= 0)
	{
		
		if (h[i] >= 48 && h[i] <= 57) t += (h[i]-48) * pow(16, h.length() - i - 1);
		else if(h[i] >= 65 && h[i] <= 70) t += (h[i]-55) * pow(16, h.length() - i - 1);
		hexToDec(h, i - 1);
		if (i == 0) cout << t;
	}
}
int main()
{
	string a;
	cin >> a;
	hexToDec(a, a.length());
	return 0;
}