//ID-C191249
//Sabrina Akter
//C++ code to reverse a stack using recursion
#include<bits/stdc++.h>
using namespace std;

//Using std::stack for stack implementation
stack <char> st;

//Initializing a string to store result of reversed stack
string ns;

//Below is a recursive function that inserts an element at the bottom of a stack.
char insert_at_bottom(char x)
{
	if(st.size() == 0)
	st.push(x);
	else
	{
		//All items are held in Function Call Stack until we reach end of the stack
		//When the stack becomes empty, the st.size() becomes 0, the above if part is executed and the item is inserted at the bottom

		char a = st.top();
		st.pop();
		insert_at_bottom(x);

		//Push all the items held in Function Call Stack once the item is inserted at the bottom
		st.push(a);
	}
}

//Below is the function that reverses the given stack using insert_at_bottom()
char reverse()
{
	if(st.size()>0)
	{
		//Hold all items in Function Call Stack until we reach end of the stack
		char x = st.top();
		st.pop();
		reverse();

		//Insert all the items held in Function Call Stack one by one from the bottom to top.
		//Every item is inserted at the bottom
		insert_at_bottom(x);
	}
}

//Driver Code
int main()
{
    int n, i;
    char ch;
    cout << "Enter the amount of elements you want to push inside the stack: ";
    cin >> n;
    cout << "Enter the elements:\n";
    //Push elements into the stack
    for(i=0;i<n;i++)
    {
        cin >> ch;
        st.push(ch);
    }
	reverse();

	//Storing values of reversed stack into a string for display
	while(!st.empty())
	{
		char p=st.top();
		st.pop();
		ns+=p;
	}
	cout<<"Original Stack: "<<endl;
    for(i=0;i<n;i++)
    {
        cout << ns[i] << " ";
    }
    cout<<"\nReversed Stack:"<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout << ns[i] << " ";
    }
	return 0;
}



