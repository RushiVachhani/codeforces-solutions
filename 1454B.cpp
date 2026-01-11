/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1454B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int x;
    if(n==1) {
        cin >> x; 
        cout<<1<<"\n";
        return;
    }
    vector<int> arr(n+1, 0), index(n+1, 0);
    for(int i=0; i<n; i++) {
        cin >> x;
        arr[x]++;
        index[x] = i+1;
    }
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]==1) {
            cout<<index[i]<<"\n";
            return;
        }
    }
    cout<< -1 <<"\n";
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