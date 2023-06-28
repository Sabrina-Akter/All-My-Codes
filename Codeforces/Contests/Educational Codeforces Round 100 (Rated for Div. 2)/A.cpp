#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, seven, flag;
    cin >> t;
    while(t--)
    {
        flag = 0;
        seven = 1;
        long long ar[3];
        cin >> ar[0] >> ar[1] >> ar[2];
        while(1)
        {
            sort(ar,ar+3);
            //1
            if(seven%7==0)
            {
                ar[0]--;
                ar[1]--;
                ar[2]--;
                if(ar[0]==0 && ar[1]==0 && ar[2]==0 && (seven%7==0))
                {
                    flag=1;
                }
                else
                {
                    seven++;
                }
            }
            //2
            if(ar[0]==0 && ar[1]==0 && ar[2]==0 && (seven%7==0))
            {
                flag=1;
            }
            //3
            if(ar[0]==1 && ar[1]==1 && ar[2]==1)
            {
                if(seven%7==0)
                {
                    flag=1;
                    ar[0]--;
                    ar[1]--;
                    ar[2]--;
                }
                if(seven%7!=0)
                {
                    flag=0;
                    ar[0]--;
                    ar[1]--;
                    ar[2]--;
                }
            }
            //4
            if(ar[2]!=1 && ar[2]!=0)
            {
                ar[2]--;
                seven++;
            }
            //5
            else if(ar[1]!=1 && ar[1]!=0)
            {
                ar[1]--;
                seven++;
            }
            //6
            else if(ar[0]!=1  && ar[0]!=0)
            {
                ar[0]--;
                seven++;
            }
            if(ar[0]==0 || ar[1]==0 || ar[2]==0)
            {
                //7
                if(flag==1)
                {
                    cout << "YES\n";
                }
                //8
                else if(flag==0)
                {
                    cout << "NO\n";
                }
                break;
            }
        }
    }
    return 0;
}
