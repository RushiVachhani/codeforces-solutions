/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1200A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void assignFront(int arr[]) {
    for(int i=0; i<10; i++) {
        if(arr[i]==0) {
            arr[i]=1;
            break;
        }
    }
    return;
}

void assignBack(int arr[]) {
    for(int i=10-1; i>=0; i--) {
        if(arr[i]==0) {
            arr[i]=1;
            break;
        }
    }
    return;
}

void evacuate(int arr[], int room) {
    arr[room] = 0;
    return;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[10] = {0};
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='L') { assignFront(arr); }
        else if(s[i]=='R') { assignBack(arr); }
        else {evacuate(arr, s[i]-'0'); }
    }
    for(int i=0; i<10; i++) {
        cout<<arr[i];
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}