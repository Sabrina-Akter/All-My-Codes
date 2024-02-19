#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        double N = n;
        double two = 2;
        while(1)
        {
            if(N == 1) return true;
            else if(N < 1) return false;
            N /= two;
        }
    }
};

int main()
{
    

    return 0;
}