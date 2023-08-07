#include <bits/stdc++.h>
using namespace std;
int ans;
int f(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
       ans = 1+f(n-1) ;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);

    return 0;
}