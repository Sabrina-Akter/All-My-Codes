#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*long long n, x, i, y;
    cin >> n;
    while(n--)
    {
        cin >> x;
        vector <long long> v;
        set <long long> s;
        for(i=0;i<x;i++)
        {
            cin >> y;
            v.push_back(y);
            s.insert(y);
        }
        if(s.size()==1)
        {
            cout << "-1\n";
        }
        else
        {

        }
    }*/
    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int mx = 0;
		for (auto &it : a) {
			cin >> it;
			mx = max(mx, it);
		}
		int idx = -1;
		for (int i = 0; i < n; ++i) {
			if (a[i] != mx) continue;
			if (i > 0 && a[i - 1] != mx) idx = i + 1;
			if (i < n - 1 && a[i + 1] != mx) idx = i + 1;
		}
		cout << idx << endl;
	}
    return 0;
}
