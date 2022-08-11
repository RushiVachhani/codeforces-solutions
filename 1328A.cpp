/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1328A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    int a,b;
    while(t--) {
        cin >> a >> b;
        a%b==0 ? (cout<<"0\n") : (cout<<b-(a%b)<<"\n");
    }

    return 0;
}