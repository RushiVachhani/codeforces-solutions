/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1296A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n], sum=0, odd_present=false, even_present = false;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i]%2!=0){
            odd_present = true;
        }
        else {
            even_present = true;
        }
    }
    if(accumulate(arr, arr+n, sum)%2!=0) { cout<<"YES\n"; return; }
    else {
        if(odd_present==true && even_present==true) {
            cout<<"YES\n";
            return;
        }
        else {
            cout<<"NO\n";
        }
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