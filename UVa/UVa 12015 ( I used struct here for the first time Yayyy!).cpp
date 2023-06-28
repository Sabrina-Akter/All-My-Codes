#include <bits/stdc++.h>
using namespace std;

struct web
{
    int n;
    char s[50];
};

int main()
{
    struct web A[10];
    int t, i, j, Max, c=0;
    int N[10];

    cin >> t;

    for(i=0;i<t;i++)
    {
        c++;
        for(j=0;j<10;j++)
        {
            cin >> A[j].s >> A[j].n;
            N[j] = A[j].n;
        }

        sort(N,N+10);
        Max = N[9];

        cout << "Case #" << c << ":\n" ;

        for(j=0;j<10;j++)
        {
            if(Max==A[j].n)
            {
                cout << A[j].s << endl;
            }
        }
    }
    return 0;
}
