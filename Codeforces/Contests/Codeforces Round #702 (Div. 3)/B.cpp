#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int t, n, i, x, maxi, mini, sum;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        long long ar[3]={0};
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x%3==0)
            {
                ar[0]++;
            }
            else if(x%3==1)
            {
                ar[1]++;
            }
            else if(x%3==2)
            {
                ar[2]++;
            }
        }
        while(1)
        {
            if(ar[0]==ar[1] && ar[1]==ar[2])
            {
                cout << sum << endl;
                break;
            }
            else
            {
                maxi = max(max(ar[0],ar[1]), max(ar[1],ar[2]));
                mini = min(min(ar[0],ar[1]), min(ar[1],ar[2]));
            }
            //1
            if(ar[0]==maxi && ar[1]==mini)
            {
                sum++;
                ar[0]--;
                ar[1]++;
            }
            //2
            else if(ar[1]==maxi && ar[2]==mini)
            {
                sum++;
                ar[1]--;
                ar[2]++;
            }
            //3
            else if(ar[2]==maxi && ar[0]==mini)
            {
                sum++;
                ar[2]--;
                ar[0]++;
            }
            //4
            else if(ar[0]==maxi && ar[2]==mini)
            {
                sum++;
                sum++;
                ar[0]--;
                ar[2]++;
            }
            //5
            else if(ar[1]==maxi && ar[0]==mini)
            {
                sum++;
                sum++;
                ar[1]--;
                ar[0]++;
            }
            //6
            else if(ar[2]==maxi && ar[1]==mini)
            {
                sum++;
                sum++;
                ar[2]--;
                ar[1]++;
            }
        }

    }
    return 0;
}
