/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1244A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d,k;
    cin >>a>>b>>c>>d>>k;
    int x,y;
    if(a%c==0) { x = a/c; }
    else { x = (a+c)/c; }
    if(b%d==0) { y = b/d; }
    else { y = (b+d)/d; }
    if(x+y>k) { cout<<-1<<"\n"; }
    else { cout<<x<<" "<<y<<"\n"; }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}