/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 378A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;
    int arr[3] = {0};
    for(int i=1; i<=6; i++) {
        if(abs(a-i) < abs(b-i)) { arr[0]++; }
        else if(abs(a-i) > abs(b-i)) { arr[2]++; }
        else {arr[1]++;}
    }
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}