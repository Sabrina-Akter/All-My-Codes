#include <bits/stdc++.h>
using namespace std;


    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0, high=numbers.size()-1;
        vector <int> v;
        while(low<high)
        {
            if(numbers[low]+numbers[high]==target)
            {
                v = {low+1, high+1};
                return v;
            }
            else if(numbers[low]+numbers[high]>target)
            {
                high--;
            }
            else if(numbers[low]+numbers[high]<target)
            {
                low++;
            }
        }
        return v;
    }

int main()
{
    vector <int> v = {5,25,75};
    int target = 100;
    twoSum(v, target);
    return 0;
}