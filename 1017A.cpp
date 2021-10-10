/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1017A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        arr[i] = a+b+c+d;
    }
    int cnt=0, target = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] > target) { cnt++; }
    }
    cout<<cnt+1;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}