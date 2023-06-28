#include <bits/stdc++.h>
using namespace std;

int main ( )
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	const int TAM = 2100;
	int n[2], L, R;
	cin >> n[0] >> n[1] >> L >> R;

	bitset<TAM> bset[2];
	for ( int i = 0; i < 2; ++i ) {
		int a, b;
		bset[i].reset();
		while ( n[i]-- ) {
			cin >> a >> b;
			for ( int j = a; j <= b; ++j )
				bset[i][j] = 1;
		}
	}

	int ans = 0;
	for ( int x = L; x <= R; ++x )
		if ( (bset[0]&(bset[1]<<x)).count() )
        {
            ans++;
            cout << "X = " << x << endl;
        }

	cout << ans << endl;

	return 0;
}
