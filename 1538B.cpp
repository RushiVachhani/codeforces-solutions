/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1538B
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int array[n];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> array[i];
    sum += array[i];
  }
  if (sum % n != 0) {
    cout << "-1\n";
    return;
  }
  int x = sum / n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (x < array[i]) ans++;
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