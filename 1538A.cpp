/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1538A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int stepsFromLeftSide(int i) { return i - 0 + 1; }

int stepsFromRightSide(int i, int n) { return n - i + 1; }

int stepsToDestroy(int i, int n) {
  return min(stepsFromLeftSide(i), stepsFromRightSide(i, n));
}

void solve() {
  int n;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  int max_index = max_element(array, array + n) - array;
  int min_index = min_element(array, array + n) - array;
  int distance_between_max_and_min = abs(max_index - min_index);
  int total_steps =
      min(stepsToDestroy(max_index, n - 1), stepsToDestroy(min_index, n - 1)) +
      min(max(stepsToDestroy(max_index, n - 1),
              stepsToDestroy(min_index, n - 1)),
          distance_between_max_and_min);
  cout << total_steps << "\n";
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