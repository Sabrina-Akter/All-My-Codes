#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main(){
	char *arr_pointer;
	int NUMBER;
	cin>>NUMBER;
	arr_pointer = new char[NUMBER];

	for (int i = 0; i < NUMBER; i++)
	{
		cin>>*(arr_pointer + i);
	}
	for (int i = 0; i < NUMBER; i++)
	{
		for (int j = i + 1; j < NUMBER; j++)
		{
			if (*(arr_pointer + i) > *(arr_pointer + j))
			{
				char temp;
				temp = *(arr_pointer + i);
				*(arr_pointer + i) = *(arr_pointer + j);
				*(arr_pointer + j) = temp;
			}
		}
	}
	for (int i = 0; i < NUMBER; i++)
	{
		cout<<*(arr_pointer + i);
	}
	cout<<endl;
	delete [] arr_pointer;

	return 0;
}
