#include <bits/stdc++.h>
using namespace std;

int max(int a, int b);

int lcs( string X, string Y, int m, int n )
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m-1] == Y[n-1])
		return 1 + lcs(X, Y, m-1, n-1);
	else
		return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

int max(int a, int b)
{
	return (a > b)? a : b;
}

int main()
{
    string X, Y;
    cin >> X >> Y;
	int m = X.size();
	int n = Y.size();

	cout<<"Length of LCS is "<< lcs( X, Y, m, n ) ;

	return 0;
}

