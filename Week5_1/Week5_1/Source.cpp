#include<iostream>
#include<string.h>
using namespace std;
double t ;
void binToDec(string a, int i)
{
	
	if (i >= 0)
	{
		if (a[i] == '1') t += pow(2, a.length()-i-1 );
		binToDec(a,i - 1);
		if(i==0) cout << t;
	}

	
}
int main()
{
	string x;
	cin >> x;
	int y = x.length();
	binToDec(x, y-1);
	return 0;
}
