/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1551a
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << "1 0"
         << "\n";
    return;
  }
  if (n == 2) {
    cout << "0 1"
         << "\n";
    return;
  }
  if (n % 3 == 0) {
    cout << n / 3 << " " << n / 3 << "\n";
  } else {
    if ((n / 3) + 1 + (2 * (n / 3)) == n) {
      cout << (n / 3) + 1 << " " << n / 3 << "\n";
    } else {
      cout << (n / 3) << " " << (n / 3) + 1 << "\n";
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