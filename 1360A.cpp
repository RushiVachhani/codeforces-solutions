/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1360A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int compare(int a, int b, char c) {
    if(c=='s') { return (a <= b ? a : b); }
    else { return (a >= b ? a : b); }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin >> a >> b;
        if(2*compare(a,b,'s')>compare(a,b,'g')) {
            cout << (2*compare(a,b,'s'))*(2*compare(a,b,'s'))<<"\n";
        }
        else {
            cout << compare(a,b,'g')*compare(a,b,'g')<<"\n";
        }
    }

    return 0;
}