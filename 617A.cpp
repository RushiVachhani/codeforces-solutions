/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 617A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    if(n%5 == 0) {
        cout<< n/5;
    }
    else {
        cout << (n/5) + 1;
    }

    return 0;
}