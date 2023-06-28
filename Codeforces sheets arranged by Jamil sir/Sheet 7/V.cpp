#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int findTotalWays(vector<int> arr, int i, int k)
{

	// If target is reached, return 1
	if (k == 0 && i == arr.size())
    {
        cout << "#1 k = " << k << " and i = " << i << endl;
		return 1;
    }

	// If all elements are processed and
	// target is not reached, return 0
	if (i >= arr.size())
    {
        cout << "#2 i = " << i << endl;
		return 0;
    }

	// Return total count of three cases
	// 1. Don't consider current element
	// 2. Consider current element and subtract it from target
	// 3. Consider current element and add it to target
    cout << "#3.1 k = " << k << " and i+1 = " << i+1 << endl;
    cout << "#3.2 k-arr[i] = " << k-arr[i] << " and i+1 = " << i+1 << endl;
    cout << "#3.3 k+arr[i] = " << k+arr[i] << " and i+1 = " << i+1 << endl;
    return findTotalWays(arr, i + 1, k) + findTotalWays(arr, i + 1, k - arr[i]) + findTotalWays(arr, i + 1, k + arr[i]);
}

int main()
{
	fastt;
	int n, k, i, x;
	cin >> n >> k;
	vector<int> arr;
	for(i=0;i<n;i++)
    {
        cin >> x;
        arr.push_back(x);
    }
	cout << findTotalWays(arr, 0, k) << endl;

	return 0;
}

