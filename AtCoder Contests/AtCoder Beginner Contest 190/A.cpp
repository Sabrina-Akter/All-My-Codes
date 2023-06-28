#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int a, b, c;
    cin >> a >> b >> c;

    if(c==0)
    {
        if(a>b)
        {
            cout << "Takahashi" << endl;
        }
        else if(b>=a)
        {
            cout << "Aoki" << endl;
        }
    }
    else if(c==1)
    {
        if(a>=b)
        {
            cout << "Takahashi" << endl;
        }
        else if(b>a)
        {
            cout << "Aoki" << endl;
        }
    }
    return 0;
}
