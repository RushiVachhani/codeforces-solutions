/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1535A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;
  if (min(s1, s2) > max(s3, s4) || max(s1, s2) < min(s3, s4)) {
    cout << "NO"
         << "\n";
  } else {
    cout << "YES"
         << "\n";
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