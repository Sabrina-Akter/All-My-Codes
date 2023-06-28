#include <bits/stdc++.h>
using namespace std;

int main()
{
    long T, i, N, n, j, sum, x, flag, total;
    cin >> T;
    for(i=0;i<T;i++)
    {
        x = 0;
        total = 0;
        sum = 0;
        cin >> N;
        for(j=0;j<N;j++)
        {
            cin >> n;
            if(j==0)
            {
                sum = n;
                flag = n;
            }
            else
            {
                sum = sum + n;
                x++;
                if(x==flag)
                {
                    total++;
                    x = 0;
                    flag = sum;
                }
                else if((j==(N-1)) && (x<flag))
                {
                    total++;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}
