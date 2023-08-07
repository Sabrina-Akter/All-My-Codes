#include<bits/stdc++.h>
using namespace std;

int maxUniqueElement(int a[],int N,int M)
{
    map<int,int> hashMap;
    int uniqueCountWindow=0;
    int uniqueCount=0;
    for(int i=0; i<M; i++)
    {
        if(hashMap.find(a[i])==hashMap.end())
        {
            hashMap.insert(make_pair(a[i],1));
            uniqueCountWindow++;
        }
        else
        {
            hashMap[a[i]]++;
        }
    }
    uniqueCount = uniqueCountWindow;
    for(int i=M; i<N; i++)
    {
        if(hashMap[a[i-M]]==1)
        {
            cout << "IF: Erase = hashMap[a[" << i-M << "]] = " << hashMap[a[i-M]] << endl;
            hashMap.erase(a[i-M]);
            uniqueCountWindow--;
            cout << "Unique Count Window Decrement = " << uniqueCountWindow << endl;
        }
        else
        {
            hashMap[a[i-M]]--;
            cout << "ELSE Decrement = hashmap[a[" << i-M << "]] = "  << hashMap[a[i-M]] << endl;
        }
        if(hashMap.find(a[i])==hashMap.end())
        {
            hashMap.insert(make_pair(a[i],1));
            uniqueCountWindow++;
        }
        else
        {
            hashMap[a[i]]++;
        }
        uniqueCount=max(uniqueCount,uniqueCountWindow);
    }
    return uniqueCount;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 1, 1};
    int M=3;
    int N=sizeof(arr)/sizeof(arr[0]);
    cout<<"The maximum number of unique elements in sub-array of size "<<M<<" is "<<maxUniqueElement(arr,N,M)<<endl;
}
