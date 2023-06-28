#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    ll n,a=0,b=0;
	    cin >> n;
	    while(n%10==0)
	    {
	        n=n/10;
	        cout << "n/10 = " << n << endl;
	        a++;
	        cout << "a = " << a << endl;
	    }

	    while(n%2==0)
	    {
	        n=n/2;
	        cout << "n/2 = " << n << endl;
	        b++;
	        cout << "b = " << b << endl;
	    }

	    if(n!=1||b>a)
	    cout << "No" << endl;
	    else
	    cout << "Yes" << endl;
	}
	return 0;
}

