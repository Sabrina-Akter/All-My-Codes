#include <bits/stdc++.h>
using namespace std;

bool primeSubOperation(vector<int>& nums) 
{
    vector <int> all_primes;
    vector<bool> isPrime(1001, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= 1000; p++) 
    {
        if (isPrime[p]) 
        {
            for (int i = p * p; i <= 1000; i += p) 
            {
                isPrime[i] = false;
            }
        }
    }
    for (int p = 2; p <= 1000; p++) 
    {
        if (isPrime[p]) 
        {
            all_primes.push_back(p);
        }
    }
    bool okay;
    for(int i = nums.size() - 2; i >= 0; i--)
    {
        if(nums[i] < nums[i + 1]) continue;
        okay = false;
        for(int j = 0; j < all_primes.size(); j++)
        {
            if(nums[i] - all_primes[j] < nums[i + 1] && nums[i] - all_primes[j] >= 1)
            {
                nums[i] = nums[i] - all_primes[j];
                okay = true;
                break;
            }
        }
        if(okay == false) return false;
    }
    return true;
}

int main()
{
    

    return 0;
}