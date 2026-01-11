/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1472B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int weight_1=0, weight_2=0, sum = 0;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        temp==1 ? weight_1++ : weight_2++;
        sum += temp;
    }
    if(sum%2!=0) { cout<<"NO\n"; return; }
    else {
        if((sum%2==0) && (weight_1>=2)) { cout<<"YES\n"; return; }
        else if((n%2==0) && (weight_1==0)) { cout<<"YES\n"; return; }
        else { cout<<"NO\n"; return; }
    }
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