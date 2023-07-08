#include <bits/stdc++.h>
using namespace std;

    long long putMarbles(vector<int>& weights, int k) {
        long long i, j, sum=weights[0]+weights[weights.size()-1];
        long long sum_mn=sum, sum_mx=sum;
        vector <long long> v;
        for(i=0;i<weights.size();i++) 
        {
            if(i+1<weights.size())
            {
                v.push_back(weights[i]+weights[i+1]);
            }
        }
        sort(v.begin(), v.end());
        i=-1, j=v.size();
        k--;
        while(k-- && v.size()>0)
        {
            i++;
            sum_mn+=v[i];
            j--;
            sum_mx+=v[j];
        }
        return sum_mx-sum_mn;     
    }

int main()
{
    vector<int> weights = {1,3,5,1};
    int k = 2;
    putMarbles(weights, 2);
    return 0;
}