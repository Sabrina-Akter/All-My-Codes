#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int n, m, k, x, y, i, C=0;
    cin >> n >> m;
    long long int a[n], b[n];
    set <long long int> s;
    for(i=0;i<m;i++)
    {
        cin >> x >> y;
        a[i]=x-1;
        b[i]=y-1;
    }
    cin >> k;
    for(i=0;i<k;i++)
    {
        cin >> x >> y;
        s.insert(x);
        s.insert(y);
    }
    for(i=0;i<n;i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    for(i=0;i<m;i++)
    {
        if(((c[a[i]])>0) && (c[b[i]])>0)
        {
            C++;
            cout << "\nC = " << i << endl;
            for(int j=0;j<n;j++)
            {
                cout << c[j] << " ";
            }
        }
    }
    cout << C << endl;
    return 0;
}
