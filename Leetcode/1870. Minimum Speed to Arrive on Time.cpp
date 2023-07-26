#include <bits/stdc++.h>
using namespace std;

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int left = 0, right = *max_element(dist.begin(), dist.end()), mid, i; 
        double ans, sum;
        while(left<right)
        {
            double L = left, R = right, check;
            check = (L+R)/2;
            mid = (left+right)/2;
            if(mid!=check)
            {
                mid++;
            }
            sum=0;
            for(i=0;i<dist.size();i++)
            {
                double a = dist[i], b = mid, c = a/b;
                if(i!=dist.size()-1)
                {
                    c = ceil(c);
                }
                sum+=c;
            }
            cout << mid << " " << sum << endl;
            if(sum<=hour)
            {
                ans = mid;
                right = mid-1;
            }
            else if(sum>hour)
            {
                left = mid;
            }
        }
        if(sum>hour)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }

int main()
{
    vector<int> dist = {1,1,100000};
    double hour = 2.01;
    minSpeedOnTime(dist, hour);
    return 0;
}