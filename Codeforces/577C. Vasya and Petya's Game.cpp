#include <bits/stdc++.h>
using namespace std;

int a[1001];
vector <int> ans;

int main()
{
    int n;
    cin >> n;

    int k = 2;

    while (k <= n)
    {
        int v = k;
        //cout << "v = " << v << endl;
        //cout << "Loop 1 ->" << endl;
        while (v <= n)
        {
            //cout << "Push v=" << v << endl;
            ans.push_back(v);
            v *= k;
        }
        //cout << "End" << endl;
        v = k;
        //cout << "v = " << v << endl;
        //cout << "Loop 2 ->" << endl;
        while (v <= n)
        {
            //cout << "a[" << v << "] = " << 1 << endl;
            a[v] = 1;
            v += k;
        }
        //cout << "End" << endl;
        //cout << "Loop 3 ->" << endl;
        while(k<=n && a[k])
        {
            k++;
            //cout << "k = " << k << endl;
        }
        //cout << "End" << endl;
        //cout << endl;
    }
    //sort(ans.begin(), ans.end());
    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

}
