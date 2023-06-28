#include<bits/stdc++.h>
using namespace std;

vector <string> STR;

string findSum(string str1, string str2)
{
	if (str1.length() > str2.length())
		swap(str1, str2);

	string str = "";

	int n1 = str1.length(), n2 = str2.length();
	int diff = n2 - n1;
	int carry = 0;

	for (int i=n1-1; i>=0; i--)
	{
		int sum = ((str1[i]-'0') +
				(str2[i+diff]-'0') +
				carry);
		str.push_back(sum%10 + '0');
		carry = sum/10;
	}

	for (int i=n2-n1-1; i>=0; i--)
	{
		int sum = ((str2[i]-'0')+carry);
		str.push_back(sum%10 + '0');
		carry = sum/10;
	}
	if (carry)
		str.push_back(carry+'0');

	reverse(str.begin(), str.end());

	return str;
}

int main()
{
	string TT;
	string str1 = "1";
	STR.push_back(str1);
	string str2 = "1";
	STR.push_back(str2);
	for(long long i=0;i<4785;i++)
    {
        TT = findSum(str1, str2);
        STR.push_back(TT);
        str1 = str2;
        str2 = TT;
    }
    long long n;
    while(cin >> n)
    {
        cout << STR[n-1] << endl;
    }
	return 0;
}

