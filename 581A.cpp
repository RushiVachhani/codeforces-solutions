/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 581A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a,b;
    cin >> a >> b;
    if(a>b) {
        cout << b << " ";
        a = a-b;
        cout << a/2;
    }
    else if(b>a) {
        cout << a << " ";
        b = b-a;
        cout << b/2;
    }
    else {
        cout<< a << " " << 0;
    }

    return 0;
}