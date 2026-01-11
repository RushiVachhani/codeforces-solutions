/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1676A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  if ((s[0] + s[1] + s[2]) == (s[n - 1] + s[n - 2] + s[n - 3])) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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