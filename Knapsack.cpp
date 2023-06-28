#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

#define MAX_N 20
#define MAX_W 10000

int w[2006];
int val[2006];

int table[2004][2004];

int knap(int n, int cap)
{
    for(int i= 0; i<=n; i++)
    {
        for(int j= 0; j<=cap; j++)
        {
            if(i == 0 || j== 0)
            {
                table[i][j]= 0;
                //cout << "#1 table["<<i<<"]["<<j<<"] = " << table[i][j] << endl;
            }
            else if(w[i-1] <= j)
            {
                table[i][j]= max(val[i-1]+table[i-1][j-w[i-1]], table[i-1][j]);
                //cout << "#2 table["<<i<<"]["<<j<<"] = " << table[i][j] << endl;
            }
            else
            {
                table[i][j]= table[i-1][j];
                //cout << "#3 table["<<i<<"]["<<j<<"] = " << table[i][j] << endl;
            }
        }
        //cout << endl;
    }
    return table[n][cap];
}

void solve(void){
    int n, s;
    cin>>n>>s;

    for(int i= 0; i<n; i++)
    {
        cin>>w[i]>>val[i];
    }
    cout<< knap(n, s) <<endl;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
