#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define MAX 100005

int A[MAX];
int L[MAX];
int R[MAX];

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++) scanf("%d",&A[i]);

    A[0]=INT_MAX;
    L[0]=0;
    for(int i=1;i<=n;i++){
        if(A[i-1]<A[i]) L[i]=L[i-1];
        else L[i]=i-1;
    }

    A[n+1]=INT_MIN;
    R[n+1]=n+1;
    for(int i=n;i>=1;i--){
        if(A[i+1]>A[i]) R[i]=R[i+1];
        else R[i]=i+1;
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        if(A[i+1]-A[i-1]>1) ans=max(ans,R[i+1]-L[i-1]-1);
        else ans=max(ans,max(R[i+1]-i,i-L[i-1]));
    }
    cout<<ans<<endl;
}
