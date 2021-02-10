/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 486A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long int t, n_even, n_odd;
    cin >> t;
    if(t%2==0) {
        n_even = ((2+t)/2)-1;
        n_odd = ((2+(t-1))/2);
    }
    else {
        n_even = ((2+t-1)/2)-1;
        n_odd = ((2+t)/2);
    }
    cout << (n_even*(n_even+1)) - (n_odd * n_odd);
    return 0;
}