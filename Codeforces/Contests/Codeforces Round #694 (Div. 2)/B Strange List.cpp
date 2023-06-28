#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, a, i, sum, x, N;
    cin >> t;
    while(t--)
    {
        x = -1;
        sum = 0;
        cin >> n >> a;
        vector <long long> v;
        for(i=0;i<n;i++)
        {
            cin >> N;
            v.push_back(N);
            sum = sum + N;
        }
        while(1)
        {
            x++;
            if(v[x]%a!=0)
            {
                break;
            }
            v.push_back(v[x]/a);
            v.push_back(v[x]/a);
            sum = sum + ((v[x]/a)*2);
        }
        cout << sum << endl;
        for(i=0;i<v.size();i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
