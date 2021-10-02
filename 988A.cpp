/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 988A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    map<int, int> map;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        auto it = map.find(temp);
        if(it==map.end()) {
            map.insert({temp, i+1});
        }
        else { continue; }
    }
    if(map.size()<k) { cout<<"NO\n"; return; }
    else {
        cout<<"YES\n";
        auto it = map.begin();
        for(int i=0; i<k; i++) {
            cout<<it->second<<" ";
            it++;
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}