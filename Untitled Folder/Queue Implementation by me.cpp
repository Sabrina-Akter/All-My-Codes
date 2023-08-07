#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, f = -1, r = 0;
  cout << "Enter the capacity of the queue: ";
  cin >> n;
  int QUEUE[n];
  int ch;
  cout << "1) Insert element to queue" << endl;
  cout << "2) Delete element from queue" << endl;
  cout << "3) Display all the elements of queue" << endl;
  cout << "4) Exit" << endl;
  cout << "Enter your choice : " << endl;
  cin >> ch;
  if(ch == 1)
  {
      if(r==n-1)
      {
          cout << "QUEUE is overflowed.\n";
      }
      int val;
      cout << "Insert the element in queue : " << endl;
      cin >> val;
      f=0;
      r++;
      QUEUE[r] = val;
  }
  if(ch==2)
  {
      cout << "Element deleted from queue is : " << QUEUE[f] << endl;
      for(int i=1;i<=r;i++)
      {
          QUEUE[i-1] = QUEUE[i];
      }
  }
  return 0;
}
