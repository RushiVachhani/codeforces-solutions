/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1692A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int count = 0;
  int taimurDistance = 0;
  for (int i = 0; i < 4; i++) {
    int x;
    cin >> x;
    if (i == 0) {
      taimurDistance = x;
    } else {
      if (x > taimurDistance) {
        count++;
      }
    }
  }
  cout << count << "\n";
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