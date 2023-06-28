#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Read the set S
    set<int> S;
    cout << "Enter the elements of the set S: ";
    int x;
    while (cin >> x) {
        S.insert(x);
    }

    // Sort the elements of S in ascending order
    vector<int> sorted_S(S.begin(), S.end());
    sort(sorted_S.begin(), sorted_S.end());

    // Find the maximum number of integers in S
    int count = sorted_S.size();
    for (int i = 1; i < sorted_S.size(); i++) {
        int x = sorted_S[i];
        int y = sorted_S[i - 1];
        int diff = x - y;
        if (S.find(diff) == S.end()) {
            S.insert(diff);
            count++;
        }
    }

    // Print the result
    cout << "Maximum possible number of integers in S: " << count << endl;

    return 0;
}

