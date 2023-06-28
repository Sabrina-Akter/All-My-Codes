#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, x;
    vector <long long> v1;
    vector <long long> v2;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> x;
        if(x%2==0)
        {
            v1.push_back(i);
        }
        else
        {
            v2.push_back(i);
        }
    }
    if(v1.size()==1)
    {
        cout << v1[0] << endl;
    }
    else if(v2.size()==1)
    {
        cout << v2[0] << endl;
    }
    return 0;
}
