/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1560B
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int diff = abs(a - b);
  int total = diff * 2;
  if (a < 1 || a > total || b < 1 || b > total || c < 1 || c > total) {
    cout << -1 << "\n";
    return;
  }

  int x1 = c + diff;
  int x2 = c - diff;

  if (x1 >= 1 && x1 <= total) {
    cout << x1 << "\n";
    return;
  } else if (x2 >= 1 && x2 <= total) {
    cout << x2 << "\n";
    return;
  } else {
    cout << -1 << "\n";
    return;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}