/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 467A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t,p,q, count = 0;
    cin >> t;
    while(t--) {
        cin >> p >> q;
        if(q-p >= 2) {
            count++;
        }
    }
    cout << count;
    return 0;
}