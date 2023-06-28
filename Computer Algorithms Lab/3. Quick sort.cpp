#include <iostream>
using namespace std;

static int partition(int Array[], int left, int right)
{
  int i = left;
  int pivot = Array[right];
  int temp;
  for(int j = left; j <=right; j++) {
    if(Array[j] < pivot) {
      temp = Array[i];
      Array[i] = Array[j];
      Array[j] = temp;
      i++;
    }
  }
  temp = Array[right];
  Array[right] = Array[i];
  Array[i] = temp;
  return i;
}

static void quicksort(int Array[], int left, int right)
{
  if (left < right) {
    int pivot = partition(Array, left, right);
    quicksort(Array, left, pivot-1);
    quicksort(Array, pivot+1, right);
  }
}

int main (){
  int n, i;
  cin >> n;
  int MyArray[n];
  for(i=0;i<n;i++)
  {
      cin >> MyArray[i];
  }
  quicksort(MyArray, 0, n-1);
  cout<<"\nSorted Array: \n";
  for(i=0;i<n;i++)
  {
      cout << MyArray[i] << " ";
  }
  return 0;
}
