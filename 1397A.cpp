/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1397A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[26] = {0};
    string s;
    for(int i=0; i<n; i++) {
        cin >> s;
        for(int i=0; i<s.length(); i++) {
            arr[s[i]-'a']+=1;
        }
    }
    for(int i=0; i<26; i++) {
        if(arr[i]%n!=0) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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