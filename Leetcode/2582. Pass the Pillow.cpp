#include <bits/stdc++.h>
using namespace std;

int passThePillow(int n, int time) 
{
    double N = n - 1;
    double Time = time;
    double Div = Time / N;
    double div = ceil(Div);
    int mod = time % (int)N;
    if((int)div % 2 == 1)
    {
        if(mod == 0) return n;
        else return mod + 1;
    }
    else
    {
        if(mod == 0) return 1;
        else return n - mod;
    }
}

int main()
{
    

    return 0;
}