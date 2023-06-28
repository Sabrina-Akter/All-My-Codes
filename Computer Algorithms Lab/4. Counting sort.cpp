#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, max, min, sum=0, pos;
    cin >> n;
    int ar[n], count[100000]={0}, sum_count[100000]={0}, sorted_ar[n];
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
        count[ar[i]]++;
        if(i==0)
        {
            max = ar[0];
            min = ar[0];
        }
        else
        {
            if(ar[i]>max)
            {
                max = ar[i];
            }
            if(ar[i]<min)
            {
                min = ar[i];
            }
        }
    }
    for(i=min;i<=max;i++)
    {
        sum = sum + count[i];
        sum_count[i] = sum;
    }
    for(i=0;i<n;i++)
    {
        pos = sum_count[ar[i]];
        sorted_ar[pos-1] = ar[i];
        sum_count[ar[i]]--;
    }
    cout << "Array after counting sort: ";
    for(i=0;i<n;i++)
    {
        cout << sorted_ar[i] << " ";
    }
    return 0;
}
