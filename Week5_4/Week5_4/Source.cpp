#include<iostream>
#include<string.h>
#include<vector>

using namespace std;
vector<int> a;
void decToBin(int x,int d)
{
	
	if (x > 0)
	{
		a.push_back(x % 2);
		decToBin(x / 2,d);
	}
	else
	{
		if (d == 1)
		{
			if (a.size() != 4)
			{
				for (int i = 1; i <= 4 - a.size(); i++) cout << '0';
			}
		}
		for (int i = a.size() - 1; i >= 0; i--) cout << a[i];
		while (!a.empty()) a.pop_back();
	}
}
int hexToDec(char h)
{
	int t=0;
	if (h >= 48 && h <= 57) t += (h - 48);
	else if (h >= 65 && h <= 70) t += (h - 55);
	return t;
}
int main()
{
	string p;
	cin >> p;
	for (int i = 0; i < p.length(); i++)
	{
		
		int temp=hexToDec(p[i]);
		if(i==0) decToBin(temp,0);
		else decToBin(temp, 1);
	}
	return 0;
}