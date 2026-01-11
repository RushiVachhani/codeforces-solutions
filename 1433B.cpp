/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1433B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int middle_zeros=0;
    for( auto &it : arr) {
        cin >> it;
    }
    while(arr.back()==0) {
        arr.pop_back();
    }
    reverse(arr.begin(), arr.end());
    while(arr.back()==0) {
        arr.pop_back();
    }
    for(auto it=arr.begin(); it!=arr.end(); it++) {
        if(*it==0) { middle_zeros++; }
    }
    cout<<middle_zeros<<"\n";
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