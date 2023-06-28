#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, x, f=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(x==1)
        {
            f=1;
            cout << "HARD\n";
            break;
        }
    }
    if(f==0)
    {
        cout << "EASY\n";
    }
    return 0;
}
