#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a%b==0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << ((b) - (a%b)) << endl;
        }
    }
    return 0;
}