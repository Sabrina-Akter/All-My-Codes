#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i, a, b, n;
        cin >> a >> b;
        int arr[101] = {0}, arr2[101] = {0}, sum=0;
        for(i=0;i<a;i++)
        {
            cin >> n;
            if(i==n-1)
            {
                arr[n] = -1;
                arr2[n] = 0;
                continue;
            }
            else if(arr[n]==-1)
            {
                arr2[n] = 0;
                continue;
            }
            else
            {
                arr[n]++;
                if(arr[n]>=b)
                {
                    arr2[n] = 1;
                }
            }
        }
        for(i=0;i<101;i++)
        {
            sum = sum + arr2[i];
        }
        cout << sum << endl;
    }
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i, a, b, n, ans=0;
        cin >> a >> b;
        int arr[101] = {0};
        for(i=0;i<a;i++)
        {
            cin >> n;
            if(i==(n-1))
            {
                arr[n] = -1;
                continue;
            }
            else if(arr[n]==-1)
            {
                continue;
            }
            else
            {
                arr[n]++;
            }
        }
        for(i=1; i<=100; i++){
            if(arr[i]>=b)ans++;
        }
        cout <<ans << endl;
    }
}*/
