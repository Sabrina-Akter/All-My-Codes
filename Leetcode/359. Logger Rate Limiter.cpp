#include <bits/stdc++.h>
using namespace std;

class Logger 
{
public:
    unordered_map <string, int> logger;
    Logger() 
    {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) 
    {
        if(logger.count(message) == false || timestamp >= logger[message])
        {
            logger[message] = timestamp + 10;
            return true;
        } 

        else return false;
    }
};

int main()
{
    

    return 0;
}