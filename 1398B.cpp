/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1398B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int counter=0, alice_count=0;
    vector<int> arr;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='1') {
            counter++;
        }
        else {
            arr.push_back(counter);
            counter=0;
        }
    }
    if(counter!=0) { arr.push_back(counter); }
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i=0; i<arr.size(); i++) {
        if(i%2==0) {
            alice_count += arr[i];
        }
    }
    cout<<alice_count<<"\n";
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