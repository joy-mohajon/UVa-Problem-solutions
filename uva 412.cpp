#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  return a % b == 0 ? b : gcd(b, a % b);
}

int main() {
  int n;
  while (scanf("%d", &n) && n > 0) {
    vector <int > nums(n);
    for (int i = 0; i < n; ++i) scanf("%d", &nums[i]);
    int cnt = 0;S
    for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        if (gcd(nums[i], nums[j]) == 1) ++cnt;
      }
    }

    if (cnt > 0) {
      printf("%.6f\n", sqrt(n * (n - 1) / 2 * 6.0 / cnt));
    } else {
      printf("No estimate for this data set.\n");
    }
  }
  return 0;
}
