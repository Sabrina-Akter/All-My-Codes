#include<bits/stdc++.h>
using namespace std;

vector <string> STR;

string findSum(string str1, string str2)
{
	if (str1.length() > str2.length())
		swap(str1, str2);

	string str = "";

	long long n1 = str1.length(), n2 = str2.length();
	long long diff = n2 - n1;
	long long carry = 0;

	for (long long i=n1-1; i>=0; i--)
	{
		long long sum = ((str1[i]-'0') +
				(str2[i+diff]-'0') +
				carry);
		str.push_back(sum%10 + '0');
		carry = sum/10;
	}

	for (long long i=n2-n1-1; i>=0; i--)
	{
		long long sum = ((str2[i]-'0')+carry);
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
	string aa1 = "1";
	STR.push_back(aa1);
	string aa2 = "1";
	STR.push_back(aa2);
	for(long long i=2;i<5000;i++)
    {
        TT = findSum(aa1, aa2);
        STR.push_back(TT);
        aa1 = aa2;
        aa2 = TT;
    }
    long long N;
    while(cin >> N)
    {
        cout << "The Fibonacci number for " << N << " is ";
        if(!N)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << STR[N-1] << endl;
        }
    }
	return 0;
}
