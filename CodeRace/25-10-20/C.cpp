#include<bits/stdc++.h>
using namespace std;

long long BigProblem(long long n)
{
    long long Sum = 0;
    for(long long  i = 1; i<= n;i=i+2)
        {
                Sum += (i*2);
        } return Sum;
}
int main()
{
    long long t, x, y;
    cin >> t;
    while(t--)
    {
        cin >> x;
        y = ((x/2) * ((x/2) + 1));
        cout << BigProblem(x) + y << endl;
    }
}
