#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[100];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){

        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);

        merge(arr,low,high,mid);
    }
}
int main()
{
    int n, array[100];
    cout<<"Enter the total number of elements in the array: ";
    cin>>n;
    cout<<"\nEnter "<<n<<" elements: ";
    for (int i = 0; i < n; i++) { cin>>array[i];}

    merge_sort(array, 0, n-1);
    cout<<"\nThe sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout << endl;
}

