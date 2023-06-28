#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, sum=0, one, two;
    cin >> t;
    while(t--)
    {
        sum=0;
        set <long long> s;
        cin >> n;
        vector <long long> ar(n);
        for(i=0;i<n;i++)
        {
            cin >> ar[i];
            s.insert(ar[i]);
            sum = sum+ar[i];
        }
        one = count(ar.begin(), ar.end(),1);
        two = count(ar.begin(),ar.end(),2);
        if(sum%2!=0)
        {
            cout << "NO\n";
        }
        else if(s.size()==1)
        {
            if(n%2==0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if(one%2==0 && two%2!=0)
        {
            cout << "YES\n";
        }
        else if(one%2==0 && two%2==0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
