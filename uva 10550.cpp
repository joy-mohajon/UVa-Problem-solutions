#include <stdio.h>

int main() {
  int a, b, c, d, ans;
  while (scanf("%d %d %d %d", &a, &b, &c, &d)) {
    if(a==0 && b==0 && c==0 && d==0)break;
    ans = 1080;
    ans += (a > b) ? (a - b) * 9 : (a - b + 40) * 9;
    ans += (c > b) ? (c - b) * 9 : (c - b + 40) * 9;
    ans += (c > d) ? (c - d) * 9 : (c - d + 40) * 9;
    printf("%d\n", ans);
  }

  return 0;
}