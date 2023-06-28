#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i, j, swap, count;

    cout << "Enter the amount of elements of the array: ";
    cin >> n;
    long long int ar[n];
    cout << "Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    while(1)
    {
        count = 0;
        for(i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1])
            {
                swap = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = swap;
                count++;
            }
        }
        if(count==0)
        {
            break;
        }
    }
    cout << "The sorted array is: ";
    for(i=0;i<n;i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
