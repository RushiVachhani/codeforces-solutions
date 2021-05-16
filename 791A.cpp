/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 791A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a,b, t=0;
    cin >> a >>b;

    if(a==b) { cout << 1; return 0;}
    else if (a>b) { cout << 0; return 0;}
    else {
        while(a<=b) {
            a *= 3;
            b *= 2;
            t++;
        }
    }

    cout << t;
    return 0;
}