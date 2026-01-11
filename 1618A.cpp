/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1618a
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a1, a2, a3, sumOf3;
  for (int i = 0; i < 7; i++) {
    int x;
    cin >> x;
    if (i == 0) a1 = x;
    if (i == 1) a2 = x;
    if (i == 6) sumOf3 = x;
  }
  cout << a1 << " " << a2 << " " << sumOf3 - (a1 + a2) << "\n";
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