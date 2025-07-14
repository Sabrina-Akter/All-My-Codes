#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s;
	for(cin>>i;i--;)
    {
		cin>>s;
		stack<char>a;
		int cnt=0;
		for(auto c:s)
        {
			if(a.empty())++cnt;
			if(c==')')a.pop();
			else a.push(c);
		}
        puts(cnt>1?"YES":"NO");
	}
    return 0;
}