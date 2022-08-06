/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1325B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr;
    int x;
    for(int i=0; i<n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    auto it = unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());
    cout<<arr.size();
    cout<<"\n";
    return ;
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