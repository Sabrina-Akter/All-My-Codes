#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long STEP,MOD,n;
    while(cin >> STEP >> MOD)
    {
        long long A[100000];
        cout << "A[" << MOD << "]" << endl;
         n=MOD;
        cout << "n = " << n << endl;
        memset(A,0,sizeof(A));
        long long p=0,i,j=0;
        long long k=0;
        while(n--){
                  k=j+STEP;
                  cout << "k = " << k << endl;
                if(k>MOD)k=k-MOD;
                cout << "k = " << k << endl;
                   A[k]++;
                   cout << "A[" << k << "] = " << A[k] << endl;
                   j=k;
                   cout << "j = " << j << endl;
        }
        for(i=1; i<MOD; i++)
        {
            if(A[i]==0 || A[i]>1)
            {
                p=1;
            }
        }
            cout<<setw(10)<<STEP<<setw(10)<<MOD<<"    ";
            if(p==0)cout<<"Good Choice"<<endl;
        else if(p==1)cout<<"Bad Choice"<<endl;
            cout<<endl;
            //cout << endl;
    }
    return 0;
}
