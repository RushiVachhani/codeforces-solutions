/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1374A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int x, y, n;
        cin >> x >> y >> n;
        if(n - (n%x) + y <= n ) { cout <<n - (n%x) + y<<"\n"; }
        else { cout << n - (n%x) + y - x<<"\n"; }
    }

    return 0;
}