/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1228A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

bool isDistinct(int x) {
    int arr[10] = {0};
    while(x) {
        arr[x%10]++;
        if(arr[x%10]>1) { return false; }
        x/=10;
    }
    return true;
}

void solve() {
    int a,b;
    cin >> a >> b;
    for(int i=a; i<=b; i++) {
        if(isDistinct(i)) {
            cout<<i;
            return;
        }
    }
    cout<<-1;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}