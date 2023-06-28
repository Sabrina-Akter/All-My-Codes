#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    string A, B;
    cin >> A >> B;
    ll i, a = A.size(), b = B.size(), flag=0;
    if(a>b)
    {
        cout << "GREATER" << endl;
        flag=1;
    }
    else if(b>a)
    {
        cout << "LESS" << endl;
        flag=1;
    }
    else if(a==b)
    {
        for(i=0;i<a;i++)
        {
            if(A[i]>B[i])
            {
                cout << "GREATER" << endl;
                flag=1;
                break;
            }
            else if(A[i]<B[i])
            {
                cout << "LESS" << endl;
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout << "EQUAL" << endl;
    }
    return 0;
}
