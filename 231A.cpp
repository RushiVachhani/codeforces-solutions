/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 231A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int implement = 0;
    while(n--) {
        int x, confidence = 0;
        for(int i=0; i<3; i++) {
            cin >> x;
            if(x==1) { confidence++; }
        }
        if(confidence>=2) { implement++; }
    }
    cout<<implement;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}