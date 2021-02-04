/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 151A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int friends, bottles, ml, limes, slices, salt, mlperfriend, saltperfriend;
    cin >>friends>>bottles>>ml>>limes>>slices>>salt>>mlperfriend>>saltperfriend;
    int total_ml, total_slices, toast_from_ml, toast_from_salt, toast_from_slices, total_toasts;
    
    total_ml = bottles*ml;
    total_slices = limes*slices;
    toast_from_ml = total_ml/mlperfriend;
    toast_from_salt = salt/saltperfriend;
    toast_from_slices = total_slices;

    total_toasts = min(toast_from_slices, min(toast_from_ml, toast_from_salt))/friends;
    cout<<total_toasts;

    return ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}