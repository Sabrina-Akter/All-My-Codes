#include<bits/stdc++.h>
using namespace std;
 
#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

ll comb(int arr[], int data[], int start, int end, int index, int r);
ll f(int arr[], int n, int r)
{
    int data[r], ans;
    ans = comb(arr, data, 0, n-1, 0, r);
    return ans;
}
 
ll comb(int arr[], int data[], int start, int end, int index, int r)
{
    int SUM = 0;
    if (index == r)
    {
        for (int j = 0; j < r; j++)
        {
            SUM+=data[j];
        }
        cout << "Sum = " << SUM << '\n';
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        comb(arr, data, i+1, end, index+1, r);
    }
}
// int main()
// {
//     fastt;
//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         unordered_map <int, int> m;
//         ll a, b, d, n, r, i;
//         cin >> a >> b >> d >> n;
//         int arr1[a], arr2[b];
//         for(i=0;i<a;i++)
//         {
//             cin >> arr1[i];
//         }
//         for(i=0;i<b;i++)
//         {
//             cin >> arr2[i];
//         }
//     }
// }
int main()
{
    fastt;
    int i, arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<=n;i++)
    {
        f(arr, n, i);
    }
}
