//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
string roundToNearest(string str) 
{
    if(str.size() == 1)
    {
        if(str[0] <= '5') return "0";
        else return "10";
    }
    else
    {
        if(str[str.size() - 1] <= '5')
        {
            str[str.size() - 1] = '0';
            return str;
        }
        else 
        {
            str[str.size() - 1] = '0';
            for(int i = str.size() - 2; i >= 0; i--)
            {
                if(str[i] != '9') 
                {
                    str[i]++;
                    break;
                }
                else 
                {
                    str[i] = '0';
                }
            }
        }

        if(str[0] == '0')
        {
            bool done = false;
            for(int i = 0; i < str.size(); i++)
            {
                if(str[i] == '0') continue;
                if(str[i] < '9')
                {
                    done = true;
                    break;
                }
            }
            if(done == false) str = '1' + str;
        }
    }
    return str;
}
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends