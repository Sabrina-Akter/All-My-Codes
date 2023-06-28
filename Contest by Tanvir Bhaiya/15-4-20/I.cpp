#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, n;

	cin>>t;

	while(t--)
	{
        a = 0, b = 0;
        cin >> n;
        char c[n];
        for(int i=0;i<n;i++)
        {
            cin >> c[i];
        }
        for(int i=0;i<n;i++)
        {
            if(c[i-1]=='L' && c[i]=='L')
            {
                continue;
            }
            else if(c[i-1]=='R' && c[i]=='R')
            {
                continue;
            }
            else if(c[i-1]=='L' &&c [i]=='R')
            {
                continue;
            }
            else if(c[i-1]=='R' && c[i]=='L')
            {
                continue;
            }
            else if(c[i-1]=='U' && c[i]=='U')
            {
                continue;
            }
            else if(c[i-1]=='D' && c[i]=='D')
            {
                continue;
            }
            else if(c[i-1]=='U' && c[i]=='D')
            {
                continue;
            }
            else if(c[i-1]=='D' && c[i]=='U')
            {
                continue;
            }
            if(c[i]=='L')
            {
                a = a-1;
            }
            else if(c[i]=='R')
            {
                a = a+1;
            }
            else if(c[i]=='U')
            {
                b = b+1;
            }
            else if(c[i]=='D')
            {
                b = b-1;
            }
        }

        cout << a << " " << b << endl;
	}

	return 0;
}

