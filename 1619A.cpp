/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1619A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  if (n == 0 || n % 2 == 1) {
    cout << "NO\n";
    return;
  } else {
    for (int i = 0; i <= (n / 2 - 1); i++) {
      if (s[i] != s[i + (n / 2)]) {
        cout << "NO\n";
        return;
      }
    }
    cout << "YES\n";
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