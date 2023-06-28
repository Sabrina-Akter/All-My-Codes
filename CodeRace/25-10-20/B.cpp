#include<bits/stdc++.h>
using namespace std;

int main()
{
    string c;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
    getline(cin, c);
    for(int i=0;i<c.size();i++)
    {
        if(c[i]=='a')
        {
            sum1=1;
        }
        else if(c[i]=='e')
        {
            sum2=1;
        }
        else if(c[i]=='i')
        {
            sum3=1;
        }
        else if(c[i]=='o')
        {
            sum4=1;
        }
        else if(c[i]=='u')
        {
            sum5=1;
        }
    }
    if((sum1+sum2+sum3+sum4+sum5)>2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
