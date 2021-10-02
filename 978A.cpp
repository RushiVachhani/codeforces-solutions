/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 978A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    vector<int> ans;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=n-1; i>=0; i--) {
        if(find(ans.begin(), ans.end(), arr[i])==ans.end()) {
            ans.push_back(arr[i]);
        }
    }
    cout<<ans.size()<<"\n";
    while(ans.size()) {
        cout<<ans.back()<<" ";
        ans.pop_back();
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}