/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1335A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    int n;
    while(t--) {
        cin >> n;
        if(n%2==0) {
            cout<<(n/2)-1<<"\n";
        }
        else {
            cout<<n/2<<"\n";
        }
    }

    return 0;
}