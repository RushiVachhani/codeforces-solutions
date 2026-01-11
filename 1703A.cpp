/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1703A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  if (s == "yes") {
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