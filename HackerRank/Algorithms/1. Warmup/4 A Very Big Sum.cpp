#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, sum=0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        sum = sum + x;
    }
    cout << sum << endl;
    return 0;
}
