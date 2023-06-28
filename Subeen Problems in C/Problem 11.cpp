#include <iostream>
using namespace std;

int main()
{
    int i, j, T, n;
    long long int  m;
    cin>>T;
    if(T>=0 && T<=15)
    {
        for(i=0;i<T;i++)
        {
            cin>>n;
            for(j=n;j>1;j--)
            {
                n = n * (j-1);
                m = n;
            }
            cout<<m<<endl;
        }
    }
    return 0;
}
