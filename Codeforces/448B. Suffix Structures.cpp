#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000


int main()
{
    fastt;
    string s1, s2, A="abcdefghijklmnopqrstuvwxyz", s3="";
    cin >> s1 >> s2;
    ll l1=s1.size(), l2=s2.size(), i, j, flag=0, c1, c2;
    if(l1==l2)
    {
        for(i=0; i<A.size(); i++)
        {
            c1 = count(s1.begin(), s1.end(), A[i]);
            c2 = count(s2.begin(), s2.end(), A[i]);
            if(c1!=c2)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout << "array" << endl;
        }
        else if(flag==1)
        {
            cout << "need tree" << endl;
        }
    }
    else if(l1!=l2)
    {
        int pos=s1.find(s2);
        if(pos>=0)
        {
            cout << "automaton" << endl;
        }
        else
        {
            for(i=0;i<l2;i++)
            {
                c1 = count(s2.begin(), s2.end(), s2[i]);//
                c2 = count(s1.begin(), s1.end(), s2[i]);//
                if(c1>c2)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout << "need tree" << endl;
            }
            else if(flag==0)
            {
                ll k=0;
                for(i=0;i<l2;i++)
                {
                    for(j=k;j<l1;j++)
                    {
                        if(s2[i]==s1[j])
                        {
                            k = j+1;
                            s3 = s3+s2[i];
                            break;
                        }
                    }
                }
                if(s2==s3)
                {
                    cout << "automaton" << endl;
                }
                else
                {
                    cout << "both" << endl;
                }
            }
        }
    }
    return 0;
}
