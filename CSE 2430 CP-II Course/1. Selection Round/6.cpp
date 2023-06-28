#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int n,i,j;
    cin >> n;
    string s;
    cin >> s;
    long long int ar[10]={0};
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='L')
        {
            for(j=0;j<10;j++)
            {
                if(ar[j]==0)
                {
                    ar[j]=1;
                    break;
                }
            }
        }
        else if(s[i]=='R')
        {
            for(j=9;j>=0;j--)
            {
                if(ar[j]==0)
                {
                    ar[j]=1;
                    break;
                }
            }
        }
        else
        {
            if(s[i]=='0')
            {
                ar[0]=0;
            }
            else if(s[i]=='1')
            {
                ar[1]=0;
            }
            else if(s[i]=='2')
            {
                ar[2]=0;
            }
            else if(s[i]=='3')
            {
                ar[3]=0;
            }
            else if(s[i]=='4')
            {
                ar[4]=0;
            }
            else if(s[i]=='5')
            {
                ar[5]=0;
            }
            else if(s[i]=='6')
            {
                ar[6]=0;
            }
            else if(s[i]=='7')
            {
                ar[7]=0;
            }
            else if(s[i]=='8')
            {
                ar[8]=0;
            }
            else if(s[i]=='9')
            {
                ar[9]=0;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        cout << ar[i];
    }
    return 0;
}
