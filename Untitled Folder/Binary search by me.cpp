#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count, i, arr[200], num, first, last, middle;
	cout << "How many elements would you like to enter?: ";
    cin >> count;

	for(i=0; i<count; i++)
	{
		cout << "Enter number" << /*(i+1)<<*/ ": ";
        cin >> arr[i];
	}
	cout << "Enter the number that you want to search: ";
    cin >> num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;
	   }
	   else if(arr[middle] == num)
	   {
		cout << num << " is found in the array at index " << middle << ".\n";
        break;
       }
       else
       {
        last = middle - 1;
       }
        middle = (first + last)/2;
    }
    if(first > last)
	{
	   cout << num << " is not found in the array.\n";
	}
	return 0;
}
