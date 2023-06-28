#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ar[2], A[2]={0}, B[2]={0}, C[2]={0}, i;
    cin >> ar[0] >> ar[1];
    for(i=0;i<2;i++)
    {
        while(ar[i]%2==0)
        {
            ar[i] = ar[i]/2;
            A[i]++;
        }
        while(ar[i]%3==0)
        {
            ar[i] = ar[i]/3;
            B[i]++;
        }
        while(ar[i]%5==0)
        {
            ar[i] = ar[i]/5;
            C[i]++;
        }
    }
    if(ar[0]==ar[1])
    {
        cout << abs(A[0]-A[1]) + abs(B[0]-B[1]) + abs(C[0]-C[1]);
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}
