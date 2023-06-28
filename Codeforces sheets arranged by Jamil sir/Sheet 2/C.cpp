#include <iostream>
using namespace std;

int main()
{
    int t,i,p=0,n=0,o=0,e=0;
    cin >> t;
    int N[t];
    for(i=0;i<t;i++)
    {
        cin >> N[i];
        if(N[i]%2==0)
        {
            e++;
        }
        if(N[i]%2!=0)
        {
            o++;
        }
        if(N[i]>0)
        {
            p++;
        }
        if(N[i]<0)
        {
            n++;
        }
    }
    cout << "Even: " << e << "\nOdd: " << o << "\nPositive: " << p << "\nNegative: " << n << endl;
    return 0;
}
