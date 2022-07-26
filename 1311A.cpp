/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1311A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;
  int diff = abs(a - b);
  if (diff == 0) {
    cout << 0 << "\n";
    return;
  } else {
    if (a < b) {
      if (diff % 2 == 0) {
        cout << 2 << "\n";
        return;
      } else {
        cout << 1 << "\n";
        return;
      }
    }
    if (a > b) {
      if (diff % 2 == 0) {
        cout << 1 << "\n";
        return;
      } else {
        cout << 2 << "\n";
        return;
      }
    }
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