/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1660A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;
  if (a == 0 && b == 0) {
    cout << 1 << "\n";
    return;
  }
  if (b == 0) {
    cout << a + 1 << "\n";
    return;
  }
  if (a == 0) {
    cout << 1 << "\n";
    return;
  }
  cout << a + (b * 2) + 1 << "\n";
  return;
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