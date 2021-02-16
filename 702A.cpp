/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 702A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int max=1, count=1;
    for(int i=n-2; i>=0; --i) {
        if(arr[i]<arr[i+1]) {
            count++;
            if(max<count) {
                max=count;
            }
        }
        else {
            count=1;
        }
    }
    cout<<max;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}