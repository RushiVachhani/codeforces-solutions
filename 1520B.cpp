/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1520B
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int count = 0;
  for (int power = 1; power <= n; power = power * 10 + 1) {
    for (int j = 1; j <= 9; j++) {
      if (power * j <= n) {
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