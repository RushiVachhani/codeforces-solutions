/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1343B
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
        int n;
        cin >> n;
        if(n%4!=0) {
            cout << "NO\n";
            continue;
        }
        else {
            cout<<"YES\n";
            n = n/2;
            for(int i=1; i<=n; i++) {
                cout<<i*2<<" ";
            }
            for(int i=1; i<n; i++) {
                cout<<i*2-1<<" ";
            }
            cout<<3*n-1<<"\n";
        }
    }

    return 0;
}