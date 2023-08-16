//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int i, j=-1, zero=0, one=0, two=0;
        for(i=0;i<n;i++) 
        {
            if(a[i]==0)
            {
                zero++;
            }
            else if(a[i]==1)
            {
                one++;
            }
            else if(a[i]==2)
            {
                two++;
            }
        }
        for(i=0;i<zero;i++)
        {
            j++;
            a[j] = 0;
        }
        for(i=0;i<one;i++)
        {
            j++;
            a[j] = 1;
        }
        for(i=0;i<two;i++)
        {
            j++;
            a[j] = 2;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends