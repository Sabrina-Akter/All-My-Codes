#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int a, b, i, t, j, count, swap, temp;

    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        long long int A[b]={0}, B[b]={0};
        vector <string> v(b), V(b);
        for(i=0;i<b;i++)
        {
            cin >> v[i];
            V[i] = v[i];
        }
        for(i=0;i<b;i++)
        {
            swap = 0;
            while(1)
            {
                count = 0;
                for(j=0;j<a-1;j++)
                {
                    if(v[i][j]>v[i][j+1])
                    {
                        temp = v[i][j];
                        v[i][j] = v[i][j+1];
                        v[i][j+1] = temp;
                        swap++;
                        count++;
                    }
                }
                if(count==0)
                {
                    A[i] = swap;
                    B[i] = swap;
                    break;
                }
            }
        }
        sort(A,A+b);

        for(i=0;i<b;i++)
        {
            for(j=0;j<b;j++)
            {
                if(A[i]==B[j] && B[j]!=-1)
                {
                    cout << V[j] << endl;
                    B[j] = -1;
                    break;
                }
            }
        }
        if(t!=0)
        {
            cout << endl;
        }
    }
    return 0;
}
