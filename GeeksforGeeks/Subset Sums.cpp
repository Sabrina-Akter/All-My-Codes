#include <bits/stdc++.h>
using namespace std;

    vector<int> ans;
    void f(vector<int>& arr, int N, int index, int sum)
    {
        if(index==N-1)
        {
            ans.push_back(sum);
        }
        else
        {
            f(arr, N, index+1, sum);
            f(arr, N, index+1, sum+arr[index+1]);
        }
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        f(arr, N, -1, 0);
        return ans;
    }

int main()
{
    int N=2;
    vector<int> arr = {2,3};
    subsetSums(arr, N);
    return 0;
}