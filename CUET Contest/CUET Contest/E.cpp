#include <bits/stdc++.h>
using namespace std;

int main()
{

	int a, b, i, j;

	cout << "Enter lower bound of the interval: ";
	cin >> a; 

	cout << "\nEnter upper bound of the interval: ";
	cin >> b; 

	cout << "\nPrime numbers between " << a << " and " << b
		<< " are: ";

	if (a <= 2) {
		a = 2;
		if (b >= 2) {
			cout << a << " ";
			a++;
		}
	}


	if (a % 2 == 0)
		a++;

	for (i = a; i <= b; i = i + 2) {
		bool flag = 1;
		for (j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cout << i << " ";
	}

	return 0;
}
