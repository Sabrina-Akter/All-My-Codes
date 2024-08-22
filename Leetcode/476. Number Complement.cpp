#include <bits/stdc++.h>
using namespace std;

int findComplement(int num) 
{
    int mask = 0;
    int temp = num;
    
    while (temp != 0) 
    {
        mask = (mask << 1) | 1;
        temp >>= 1;
    }
    
    return num ^ mask;        
}

int main()
{
    

    return 0;
}