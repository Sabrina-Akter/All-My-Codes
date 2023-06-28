#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int y, n;
    double x;
    while(1)
    {
        cin >> n;
        if(n==0)
        {
            break;
        }
        else
        {
            x = sqrt(n);
            y = sqrt(n);
            if(x==y)
            {
                cout << "yes" << endl;;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}
