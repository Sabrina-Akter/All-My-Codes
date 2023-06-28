// C++ program to illustrate
// next_permutation example

// this header file contains next_permutation function
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 10, 7, 1, 4, 3, 5, 2, 8, 6, 9 };

	sort(arr, arr + 10);

	cout << "The 3! possible permutations with 3 elements:\n";
	do {
		cout << arr[7] << " " << arr[8] << " " << arr[9] << "\n";
	} while (next_permutation(arr, arr + 10));

	cout << "After loop: " << arr[0] << ' '<< arr[1] << ' ' << arr[2] << '\n';

	return 0;
}
