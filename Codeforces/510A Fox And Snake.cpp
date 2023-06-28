#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a, b, i, j, k=0;
    cin >> a >> b;
    int N[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i%2==0)
            {
                cout << "#";
            }
            else if((i%2!=0) && (k==0))
            {
                if(j==(b-1))
                {
                    cout << "#";
                    k = 1;
                }
                else
                {
                    cout << ".";
                }
            }
            else if((i%2!=0) && (k==1))
            {
                if(j==(b-1))
                {
                    cout << ".";
                    k=0;
                }
                else if(j==0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
