/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1512A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int arr[n], x;
  map<int, int> map;
  for (int i = 0; i < n; i++) {
    cin >> x;
    arr[i] = x;
    map[x]++;
  }
  for (int i = 0; i < n; i++) {
    if (map[arr[i]] == 1) {
      cout << i + 1 << "\n";
      break;
    }
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