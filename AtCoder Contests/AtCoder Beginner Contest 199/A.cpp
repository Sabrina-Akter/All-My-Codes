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
    ll A, B, C;
    cin >> A >> B >> C;
    if(((pow(A,2)+pow(B,2)))<(pow(C,2)))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
