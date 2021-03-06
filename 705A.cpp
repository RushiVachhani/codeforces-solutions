/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 705A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    string s, odd = "I hate", even = "I love", end = " it", connect = " that ";
    if(t == 1) {
        cout << s.append(odd).append(end);
        return 0;
    }
    for(int i=1; i<=t; i++) {
        if(i%2 != 0) { s.append(odd); }
        else { s.append(even); }
        if(i<t) { s.append(connect); }
    }
    cout << s.append(end);
    return 0;
}