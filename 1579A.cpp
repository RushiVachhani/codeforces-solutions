/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1579A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int a[3] = {0};
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'A')
      a[0]++;
    else if (s[i] == 'B')
      a[1]++;
    else
      a[2]++;
  }
  if (a[0] + a[2] == a[1]) {
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