#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, i, x, sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        sum = sum+x;
    }
    if(sum==0)
    {
        cout << "EASY\n";
    }
    else
    {
        cout << "HARD\n";
    }
    return 0;
}
