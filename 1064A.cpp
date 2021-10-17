/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1064A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int arr[3];
    for(int i=0; i<3; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+3);
    if(arr[0]+arr[1] > arr[2]) { cout<<0; return; }
    if(arr[0]+arr[1]<=arr[2]) { cout<<arr[2]-(arr[0]+arr[1])+1; return; }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}