/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 703A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int m_count=0, c_count=0, m, c;
    while(t--) {
        cin >> m >> c;
        if(m==c) { continue; }
        else { m>c ? m_count++ : c_count++ ;}
    }

    if(m_count == c_count) { cout<<"Friendship is magic!^^"; }
    else { m_count > c_count ? cout<<"Mishka" : cout<<"Chris"; }

    return 0;
}