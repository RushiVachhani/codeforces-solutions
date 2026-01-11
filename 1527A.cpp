/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1527A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int msb = 0;
  for (int i = 0; i < 30; i++) {
    if ((n >> i) & 1 == 1) {
      msb = i;
    }
  }
  cout << (1 << msb) - 1 << "\n";
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