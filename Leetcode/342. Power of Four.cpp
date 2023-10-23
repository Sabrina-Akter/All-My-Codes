#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        while(1)
        {
            if((n%4!=0 && n!=1) || n==0)
            {
                return false;
            }
            if(n==1)
            {
                return true;
            }
            n=n/4;
        }
    }
};

int main()
{
    

    return 0;
}