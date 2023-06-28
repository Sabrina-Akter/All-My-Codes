#include<bits/stdc++.h>

using namespace std;
double myPow(double x, int n) {
  double ans = 1.0;
  long long nn = n, it=0;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    it++;
    cout << "Iteration = " << it << endl;
    if (nn % 2) {
      ans = ans * x;
      cout << "ans = " << ans << endl;
      nn = nn - 1;
    } else {
      x = x * x;
      cout << "x = " << x << endl;
      nn = nn / 2;
    }
    cout << "nn = " << nn << endl;
    cout << endl;
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans;
}

int main() {
  cout << myPow(2, 10) << endl;
}