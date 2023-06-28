#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int a, b;
    cin >> a >> b;
    if((a%2!=0) && (b%2!=0))
    {
        cout << "BOTH\n";
    }
    else if((a%2!=0) || (b%2!=0))
    {
        cout << "ONE\n";
    }
    else
    {
        cout << "NONE\n";
    }
    return 0;
}
