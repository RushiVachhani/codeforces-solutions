/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 615A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int buttons, bulbs;
    cin >> buttons >> bulbs;
    int arr[bulbs+1] = {0};
    for(int i=0; i<buttons; i++) {
        int x;
        cin >> x;
        for(int j=0; j<x; j++) {
            int number;
            cin >> number;
            arr[number] = 1;
        }
    }
    for(int i=1; i<=bulbs; i++) {
        if(arr[i]==0) {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}