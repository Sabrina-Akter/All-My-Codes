#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i;
    cin >> n;
    if(n%2!=0)
    {
        cout << "-1\n";
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                cout << i+1 << " ";
            }
            else
            {
                cout << i-1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
