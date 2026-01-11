/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1633A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n % 7 == 0) {
    cout << n << "\n";
  } else {
    for (int i = 0; i < 10; i++) {
      if ((n - n % 10 + i) % 7 == 0) {
        cout << n - n % 10 + i << "\n";
        break;
      }
    }
  }
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