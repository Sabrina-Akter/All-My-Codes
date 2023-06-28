#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b, i, c=0,j,sum=0,x,S;
    vector <long long> V;
    cin >> a >> b;
    long long N[a];
    for(i=0;i<a;i++)
    {
        cin >> N[i];
    }
    for(i=1;i<=a;i++)
    {
        sum = 0;
        c = 0;
        for(j=i;j<=a;j--)
        {
            sum = 0;
            x = accumulate(N+i , N+j , sum);
            if(x<=b)
            {
                c++;
            }
        }
        V.push_back(c);
    }
    sort(V.begin(), V.end());
    S = V.size();
    cout << V[S-1] << endl;
    return 0;
}
