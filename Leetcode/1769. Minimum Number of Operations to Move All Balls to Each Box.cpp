#include <bits/stdc++.h>
using namespace std;

vector<int> minOperations(string boxes) 
{
    int n = boxes.size(), sum;
    vector <int> ans(n);
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = 0; j < n; j++)
        {
            if(boxes[j] == '1') sum += abs(i - j);
        }
        ans[i] = sum;
    }
    return ans;
}

int main()
{
    

    return 0;
}