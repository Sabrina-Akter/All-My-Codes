//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends


int CountPS(char S[], int N)
{
    int ans = 0;
    for(int i = 0; i < N; i++)
    {
        string temp;
        for(int j = i; j < N; j++)
        {
            temp += S[j];
            if(temp.size() > 1)
            {
                int left = 0;
                int right = temp.size() - 1;
                bool pal = true;
                while(left <= right)
                {
                    if(temp[left] != temp[right])
                    {
                        pal = false;
                        break;
                    }
                    left++;
                    right--;
                }
                if(pal == true) ans++;
            }
        }
    }
    return ans;
}