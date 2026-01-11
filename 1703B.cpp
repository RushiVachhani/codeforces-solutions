/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1703B
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int baloons = 0;
  int character_array[26] = {0};
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if (character_array[c - 'A'] == 0) {
      baloons += 2;
      character_array[c - 'A'] += 1;
    } else {
      baloons += 1;
      character_array[c - 'A'] += 1;
    }
  }
  cout << baloons << "\n";
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