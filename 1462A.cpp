/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1462A
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
    int count = 0, pointerFirst=0, pointerLast=n-1,flag=0;
    while(count!=n) {
        if(flag==0) {
            cout<<arr[pointerFirst]<<" ";
            pointerFirst++;
            count++;
            flag=1;
        }
        else {
            cout<<arr[pointerLast]<<" ";
            pointerLast--;
            count++;
            flag=0;
        }
    }
    cout<<"\n";
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