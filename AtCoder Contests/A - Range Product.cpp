#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int a, b, n;
    cin >> a >> b;
    if(a<=0 && b>=0)
    {
        cout << "Zero\n";
    }
    else if(a>0 && b>0)
    {
        cout << "Positive\n";
    }
    else if(a<0 && b<0)
    {
        n = abs(a) - abs(b) + 1;
        if(n%2==0)
        {
            cout << "Positive\n";
        }
        else
        {
            cout << "Negative\n";
        }
    }
    return 0;
}
