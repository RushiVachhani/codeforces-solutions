/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1690A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int h1, h2, h3 = 0;
  h3 = (n - 3) / 3;
  h2 = h3 + 1;
  h1 = h3 + 2;
  int remaining = n - (h1 + h2 + h3);
  if (remaining == 1) {
    h1++;
  } else if (remaining == 2) {
    h2++;
    h1++;
  }
  cout << h2 << " " << h1 << " " << h3 << "\n";
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