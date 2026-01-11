/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1542A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int even = 0, odd = 0;
  int x;
  for (int i = 0; i < 2 * n; i++) {
    cin >> x;
    if (x % 2 == 0)
      even++;
    else
      odd++;
  }
  if (even == odd)
    cout << "YES\n";
  else
    cout << "NO\n";
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