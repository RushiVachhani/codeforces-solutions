/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 677A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,maxh,h, w=0;
    cin >> n >> maxh;
    for(int i=0; i<n; i++) {
        cin >> h;
        if(h<=maxh) { w++; }
        else if(h>maxh) { w+=2; }
    }

    cout<<w;

    return 0;
}