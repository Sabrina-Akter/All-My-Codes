#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n, i;
    cin >> n;
    set <long> s;
    set <long> :: iterator it;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(it=s.begin();it!=s.end();it++)
    {
        cout << *it << endl;
    }
    return 0;
}
