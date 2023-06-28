/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, x, f=0;
    vector <long long> v;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(i=0;i<n;i++)
    {
        if((v[i]!=v[0]) && (v[i]!=v[n-1]))
        {
            f++;
        }
    }
    cout << f << endl;
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x, f=0;
    vector <int> v;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(i=0;i<n;i++)
    {
        if((v[i]==v[0]) || (v[i]==v[n-1]))
        {
            continue;
        }
        else
        {
            f++;
        }
    }
    cout << f << endl;
    return 0;
}
