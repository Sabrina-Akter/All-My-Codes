#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    double a, b, product=1, i;
    cin >> a >> b;

    for(i=a;i<=b;i++)
    {
        product = product*i;
    }

    if(product>0)
    {
        cout << "Positive\n";
    }
    else if(product<0)
    {
        cout << "Negative\n";
    }
    else if(product==0)
    {
        cout << "Zero\n";
    }
    return 0;
}
