#include <bits/stdc++.h>
using namespace std;

int getFifthSmallestElement(std::vector<int> vec) {
    sort(vec.begin(), vec.end()); // Sort the vector in ascending order
    return vec[4]; // Return the fifth element (index 4) from the sorted vector
}

int main() {
    vector<int> vec = {10, 5, 7, 3, 1, 9, 8, 4, 2, 6};
    int fifthSmallest = getFifthSmallestElement(vec);
    cout << "Fifth smallest element: " << fifthSmallest << std::endl;
    return 0;
}