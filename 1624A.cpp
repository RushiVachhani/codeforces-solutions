/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1624A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << *max_element(arr, arr + n) - *min_element(arr, arr + n) << endl;
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