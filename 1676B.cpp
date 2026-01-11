/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1676B
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  if (n == 1) {
    cout << 0 << "\n";
    return;
  }
  int minimum = *min_element(array, array + n);
  int count = 0;
  for (int i = 0; i < n; i++) {
    count = count + abs(array[i] - minimum);
  }
  cout << count << "\n";
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