/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 427A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int recruits = 0, untreated = 0, x;

    while(n--) {
        cin >> x;
        if(x==-1) {
            if(recruits!=0) {
                recruits = recruits - 1;
            }
            else {
                untreated = untreated + 1;
            }
        }
        else {
            recruits = recruits + x;
        }
    }
    cout << untreated;
    return 0;
}