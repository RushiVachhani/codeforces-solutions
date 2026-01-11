/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1650A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  char letter;
  cin >> letter;
  string ans = "NO";
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == letter) {
      if (i % 2 == 0) ans = "YES";
    }
  }
  cout << ans << "\n";
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