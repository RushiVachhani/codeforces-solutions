/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 381A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int> s,d;
    int pointer_first=0, pointer_last=n-1, taken = 0,turn=0, sum_s=0, sum_d=0;
    while(taken!=n) {
        if(arr[pointer_first]>=arr[pointer_last]) {
            turn==0 ? s.push_back(arr[pointer_first]) : d.push_back(arr[pointer_first]);
            turn==0 ? turn=1 : turn=0 ;
            pointer_first++;
            taken++;
        }
        else {
            turn==0 ? s.push_back(arr[pointer_last]) : d.push_back(arr[pointer_last]);
            turn==0 ? turn=1 : turn=0 ;
            pointer_last--;
            taken++;
        }
    }
    cout<<accumulate(s.begin(), s.end(), sum_s)<<" "<<accumulate(d.begin(), d.end(), sum_d);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}