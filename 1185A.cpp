/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1185A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int arr[3], d;
    for(int i=0; i<3; i++) {
        cin >> arr[i];
    }
    cin >> d;
    sort(arr, arr+3);
    int d1, d2, time=0; 
    d1 = abs(arr[0]-arr[1]);
    d2 = abs(arr[1]-arr[2]);
    if(d1<d) { time+=abs(d1-d); }
    if(d2<d) { time+=abs(d2-d); }
    cout<<time;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}