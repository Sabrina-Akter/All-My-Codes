#include <iostream>
#define MAX 10
using namespace std;

int n, arr[MAX], Max = -1;

void solve(int x, int p1, int p2)
{
    if(x >= n){
        if(p1 == p2){
            Max = max(Max, p1);
        }
        return;
    }

    solve(x + 1, p1 + arr[x], p2);
    solve(x + 1, p1, p2 + arr[x]);
    solve(x + 1, p1, p2);
}

int main()
{
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    solve(0, 0, 0);

    cout<<Max<<endl;
}
