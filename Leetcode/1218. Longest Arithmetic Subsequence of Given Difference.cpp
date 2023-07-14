#include <bits/stdc++.h>
using namespace std;

    int longestSubsequence(vector<int>& arr, int difference) {
        map <int, int> m;
        int i, mx=0;
        for(i=0;i<arr.size();i++)
        {
            if(m.find(arr[i]-difference)==m.end())
            {
                m[arr[i]] = 1;
            }
            else
            {
                m[arr[i]] = m[arr[i]-difference]+1;
            }
            mx = max(mx, m[arr[i]]);
        }
        return mx;
    }

int main()
{
    vector<int> arr = {1,5,7,8,5,3,4,2,1};
    int dif = -2;
    longestSubsequence(arr, dif);
    return 0;
}