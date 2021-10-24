/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1114A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void possible() {
    cout<<"YES\n";
    return;
}

void notPossible() {
    cout<<"NO\n";
    return;
}

void solve() {
    int x,y,z;
    cin >> x >> y >> z;
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b+c < x+y+z) { notPossible(); return; }
    else {
        if(a<x) { notPossible(); return; }
        else {
            a = a-x;
            if(a+b < y) { notPossible(); return; }
            else {
                if(a>=y) { a = a - y; }
                else {
                    y = y - a;
                    a = 0;
                    b = b - y;
                }    
                if(a+b+c < z) { notPossible(); return; }
                else { possible(); return; }
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}