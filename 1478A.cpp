/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1478A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n+1, 0);
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        arr[a]++;
    }
    cout<<*max_element(arr.begin(), arr.end())<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}