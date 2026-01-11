/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1537A
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
  if (sum == n) {
    cout << "0\n";
    return;
  } else if (sum < n) {
    cout << "1\n";
  } else {
    cout << abs(n - sum) << "\n";
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