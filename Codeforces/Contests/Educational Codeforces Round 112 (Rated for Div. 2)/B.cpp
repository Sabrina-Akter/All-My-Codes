#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

void display(vector<ll> &ans) {
for(auto i :ans ) {
	cout<<i <<" ";
}
cout<<endl;
}

bool issafe(ll r,ll c,vector<vector<ll>>& visited,ll n,ll m) {
return (r < n and c <m and visited[r] !=-1 );
}

void FindPaths(vector<vector<ll>> &grid,ll r,ll c, ll n,ll m,vector<ll> &ans) {
if(r == n-1 and c == m-1) {
	ans.push_back(grid[r]);
	display(ans);
	ans.pop_back();
	return ;
}

ll ch = grid[r];

ans.push_back(ch);
grid[r] = -1;

if(issafe(r+1,c,grid,n,m)) {
	FindPaths(grid,r+1,c,n,m,ans);
}

if(issafe(r,c+1,grid,n,m)) {
	FindPaths(grid,r,c+1,n,m,ans);
}

grid[r] = ch;

ans.pop_back();
return ;
}

int main()
{
	fastt;
	ll n = 3 ,m =3, i, j, x;
	vector<vector<ll> >grid[3];
	for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cin >> x;
            grid[i].pb(x);
        }
    }
	///{ {1,2,3},{4,5,6},{7,8,9}};
	vector<ll>ans ;

	FindPaths(grid,0,0,n,m,ans);
	return 0;
}

