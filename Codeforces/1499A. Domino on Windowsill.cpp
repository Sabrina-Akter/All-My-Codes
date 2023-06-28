#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k1, k2, i, j, flag1=0, flag2=0, w, b, W=0, B=0, flag=0;
        cin >> n >> k1 >> k2;
        cin >> w >> b;
        if(w==0 && b==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll A[2][n+1];
            fill(A[0],A[0]+(n+1)*2,0);
            for(i=0;i<2;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==0)
                    {
                        if(j<k1)
                        {
                            A[i][j] = 1;
                            //cout << "1. A[" << i << "][" << j << "] = " << A[i][j] << endl;
                        }
                        else
                        {
                            A[i][j] = 2;
                            //cout << "2. A[" << i << "][" << j << "] = " << A[i][j] << endl;
                        }
                    }
                    if(i==1)
                    {
                        if(j<k2)
                        {
                            A[i][j] = 1;
                            //cout << "3. A[" << i << "][" << j << "] = " << A[i][j] << endl;
                        }
                        else
                        {
                            A[i][j] = 2;
                            //cout << "4. A[" << i << "][" << j << "] = " << A[i][j] << endl;
                        }
                    }
                }
            }
            /*for(i=0;i<2;i++)
            {
                for(j=0;j<=n;j++)
                {
                    cout << A[i][j] << "(" << i << "," << j << ")  ";
                }
                cout << endl;
            }*/
            for(i=0;i<n;i++)
            {
                if(flag1==0)
                {
                    if(W>=w)
                    {
                        flag1=1;
                        //cout << "1" << endl;
                    }
                    if((A[0][i]==1) && (A[1][i]==1))
                    {
                        //cout << "2" << endl;
                        W++;
                        A[0][i]=3, A[1][i]=3;
                    }
                    if((A[0][i]==1) && (A[0][i+1]==1))
                    {
                        //cout << "3" << endl;
                        W++;
                        A[0][i]=3, A[0][i+1]=3;
                    }
                    if((A[1][i]==1) && (A[1][i+1]==1))
                    {
                        //cout << "4" << endl;
                        W++;
                        A[1][i]=3, A[1][i+1]=3;
                    }
                    if(W>=w)
                    {
                        flag1=1;
                    }
                }
            if(flag2==0)
            {
                if(B>=b)
                {
                    flag2=1;
                    //cout << "5" << endl;
                }
                if((A[0][i]==2) && (A[1][i]==2))
                {
                    B++;
                    //cout << "6" << endl;
                    A[0][i]=4, A[1][i]=4;
                }
                if((A[0][i]==2) && (A[0][i+1]==2))
                {
                    B++;
                    //cout << "7" << endl;
                    A[0][i]=4, A[0][i+1]=4;
                }
                if((A[1][i]==2) && (A[1][i+1]==2))
                {
                    B++;
                    //cout << "8" << endl;
                    A[1][i]=4, A[1][i+1]=4;
                    //cout << "(1," << i << "),(1," << i+1 << ")" << endl;
                }
                if(B>=b)
                {
                    flag2=1;
                }
            }
            if(flag1==1 && flag2==1)
            {
                //cout << "W = " << W << " and B = " << B << endl;
                flag=1;
                break;
            }
        }
        //cout << endl;
        /*for(i=0;i<2;i++)
        {
            for(j=0;j<=n;j++)
            {
                cout << A[i][j] << "(" << i << "," << j << ")  ";
            }
            cout << endl;
        }*/
        if(flag==1)
        {
            cout << "YES" << endl;
        }
        else if(flag==0)
        {
            cout << "NO" << endl;
        }
        }
    }
    return 0;
}
