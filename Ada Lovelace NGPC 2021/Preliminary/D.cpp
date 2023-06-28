// C++ Program to find n-th stair using step size
// 1 or 2 or 3.
#include <iostream>
using namespace std;

class GFG {

	// Returns count of ways to reach n-th stair
	// using 1 or 2 or 3 steps.
public:
	double findStep(double n)
	{
		if (n == 1 || n == 0)
			return 1;
		else if (n == 2)
			return 2;

		else
			return findStep(n - 2) + findStep(n - 1)
				+ findStep(n - 0.5);
	}
};

// Driver code
int main()
{
	GFG g;
	double n = 10;
	cout << g.findStep(n);
	return 0;
}

// This code is contributed by SoM15242







