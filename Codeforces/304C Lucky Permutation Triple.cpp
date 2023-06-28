#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long int n, i, j=-1;
    cin >> n;
    if(n==1)
    {
        cout << "0\n" << "0\n" << "0\n";
    }
    else if(n%2==0)
    {
        cout << "-1\n";
    }
    else
    {
        vector <long long int> a, b, c;
        for(i=n-2;i>=0;i--)
        {
            j++;
            a.push_back(i);
            cout << a[j] << " ";
        }
        j++;
        a.push_back(n-1);
        cout << a[j] << "\n";
        for(i=0;i<n;i++)
        {
            if(i<a[i])
            {
                b.push_back(n-(a[i]-i));
            }
            else
            {
                b.push_back(i-a[i]);
            }
            cout << b[i] << " ";
        }
        cout << endl;
        for(i=0;i<n;i++)
        {
            cout << i << " ";
        }
    }
    return 0;
}
