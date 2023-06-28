//ID-C191249
//Sabrina Akter
//C++ code to delete middle of a stack without using additional data structure.
#include<bits/stdc++.h>
using namespace std;

//Deletes middle of stack of size n.
//Curr is current item number
void deleteMid(stack<char> &st, int n, int curr=0)
{
//If stack is empty or all items are traversed
if (st.empty() || curr == n)
	return;

//Remove current item
int x = st.top();
st.pop();

//Remove other items
deleteMid(st, n, curr+1);

//Put all items back except middle
if (curr != n/2)
	st.push(x);
}

//Driver function to test above functions
int main()
{
	int x, i;
	char ch;
	stack <char> st;
    cout << "Enter the amount of elements you want to push inside the stack: ";
    cin >> x;
    cout << "Enter the elements:\n";
	//Push elements into the stack
	for(i=0;i<x;i++)
    {
        cin >> ch;
        st.push(ch);
    }

	deleteMid(st, st.size());

	//Printing stack after deletion of middle.
	cout << "\nThe stack after deleting the mid element: \n";
	while (!st.empty())
	{
		char p=st.top();
		st.pop();
		cout << p << "\n";
	}
	cout << "\n\n";
	return 0;
}

