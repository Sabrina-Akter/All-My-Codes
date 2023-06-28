#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i,f=0;
    char N[100], X[100];
    cin >> N;
    strcpy(X,N);
    strrev(X);
    if(strcmp(N,X)==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        for(i=0;i<strlen(X);i++)
        {
            if(f==0 && X[i-1]=='0' && X[i]!='0')
            {
                cout << X[i];
                f=1;
            }
            else if(f==1)
            {
                cout << X[i];
            }
        }
        cout << "\nNO" << endl;
    }
    return 0;
}
